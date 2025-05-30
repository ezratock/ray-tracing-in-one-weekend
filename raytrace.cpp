//
// Created by Ezra Tock on 5/27/25.
//

#include "raytrace.h"

#include <fstream>

color ray_color(const ray& r, const hittable& world) {
    hit_record rec;
    if (world.hit(r, interval(0, infinity), rec)) {
        return 0.5 * (rec.normal + color(1,1,1));
    }

    // background
    vec3 unit_direction = unit_vector(r.direction());
    auto a = 0.5*(unit_direction.y() + 1.0);
    return (1.0-a)*color(1.0, 1.0, 1.0) + a*color(0.5, 0.7, 1.0);
}

int raytrace(const std::string& output) {
    std::ofstream file;
    file.open(output);

    // Image
    double aspect_ratio = 16.0/9.0;
    int image_width = 800;

    // Calculate the image height, and ensure that it's at least 1.
    int image_height = static_cast<int>(image_width/aspect_ratio);
    image_height = image_height < 1 ? 1 : image_height;

    // World

    hittable_list world;

    world.add(make_shared<sphere>(point3(0,0,-1), 0.5));
    world.add(make_shared<sphere>(point3(0,-100.5,-1), 100));

    // Camera
    double focal_length = 1.0;
    double viewport_width = 3.5;
    double viewport_height = viewport_width * (static_cast<double>(image_height)/image_width);
    point3 camera_center = {0, 0, 0};

    // Calculate the vectors across the horizontal and down the vertical viewport edges.
    vec3 viewport_u = {viewport_width, 0, 0};
    vec3 viewport_v = {0, -viewport_height, 0};

    // Calculate the horizontal and vertical delta vectors from pixel to pixel.
    vec3 pixel_delta_u = viewport_u / image_width;
    vec3 pixel_delta_v = viewport_v / image_height;

    // Calculate the location of the upper left pixel.
    auto pixel00_loc = camera_center + point3{-viewport_width/2, viewport_height/2, -focal_length} + pixel_delta_u/2 + pixel_delta_v/2;

    // Render
    file << "P3\n" << image_width << " " << image_height << "\n255\n";
    for (int j = 0; j < image_height; j ++) {
        std::clog << "\rScanlines remaining: " << (image_height - j) << ' ' << std::flush;
        for (int i = 0; i < image_width; i++) {
            auto pixel_center = pixel00_loc + (i * pixel_delta_u) + (j * pixel_delta_v);
            auto ray_direction = pixel_center - camera_center;
            ray r(camera_center, ray_direction);

            color pixel_color = ray_color(r, world);
            write_color(file, pixel_color);
        }
    }

    std::clog << "\rDone.                 \n";
    return 1;
}


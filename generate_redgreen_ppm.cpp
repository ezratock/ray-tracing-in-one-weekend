#include <iostream>
#include <fstream>
#include "color.h"
#include "vec3.h"
#include "generate_redgreen_ppm.h"

int generate_ppm(const std::string& output, int width, int height) {
    std::ofstream file;
    file.open(output);
    file << "P3\n" << width << " " << height << "\n255" << std::endl;

    for (int i = 0; i < height; i++ ) {
        std::clog << "\rScanlines remaining: " << (height - i) << ' ' << std::flush;
        for (int j = 0; j < width; j++) {
            color c = color{static_cast<double>(j)/(width-1), static_cast<double>(i)/(height-1), 0};
            write_color(file, c);
        }
    }

    file.close();
    return 0;
}


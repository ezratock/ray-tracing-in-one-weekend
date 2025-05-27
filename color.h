//
// Created by Ezra Tock on 5/26/25.
//

#ifndef RAY_TRACING_IN_ONE_WEEKEND_COLOR_H
#define RAY_TRACING_IN_ONE_WEEKEND_COLOR_H

#include "vec3.h"
#include <iostream>

using color = vec3;

void write_color(std::ostream& out, color& pixel) {
    double r = pixel.x();
    double g = pixel.y();
    double b = pixel.z();

    int int_r = int(r * 255.999);
    int int_g = int(g * 255.999);
    int int_b = int(b * 255.999);

    out << int_r << " " << int_g << " " << int_b << "\n";
}

#endif //RAY_TRACING_IN_ONE_WEEKEND_COLOR_H

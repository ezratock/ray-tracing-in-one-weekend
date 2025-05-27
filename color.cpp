//
// Created by Ezra Tock on 5/27/25.
//
#include "color.h"

void write_color(std::ostream& out, color& pixel) {
    double r = pixel.x();
    double g = pixel.y();
    double b = pixel.z();

    int int_r = int(r * 255.999);
    int int_g = int(g * 255.999);
    int int_b = int(b * 255.999);

    out << int_r << " " << int_g << " " << int_b << "\n";
}
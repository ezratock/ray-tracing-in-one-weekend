#include <iostream>
#include <fstream>
#include "generate_redgreen_ppm.h"

int generate_ppm(std::string output, int width, int height) {
    std::ofstream file;
    file.open(output);
    file << "P3\n" << width << " " << height << "\n255" << std::endl;

    for (float i = 0.0; i < height; i++ ) {
        for (float j = 0.0; j < width; j++) {
            file << int(j / (width-1) * 255.999) << " " << int(i / (height-1) * 255.999) << " 0\n";
        }
    }

    file.close();
    return 0;
}


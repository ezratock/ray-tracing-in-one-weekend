#include <iostream>
#include "generate_redgreen_ppm.h"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Invalid usage, must specify program arguments." << std::endl;
        return 0;
    } else if (strcmp(argv[1], "generate_ppm") == 0) {
        if (argc != 5) {
            std::cout << "Usage: generate_ppm <output> <width> <height>" << std::endl;
            return 0;
        }
        return generate_ppm(argv[2], std::stoi(argv[3]), std::stoi(argv[4]));
    } else {
        std::cout << "Invalid program argument." << std::endl;
        return 0;
    }
}
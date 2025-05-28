//
// Created by Ezra Tock on 5/28/25.
//

#ifndef RAY_TRACING_IN_ONE_WEEKEND_RTWEEKEND_H
#define RAY_TRACING_IN_ONE_WEEKEND_RTWEEKEND_H

#include <cmath>
#include <iostream>
#include <limits>
#include <memory>

// C++ Std Usings

using std::make_shared;
using std::shared_ptr;

// Constants
const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

// Utility Functions
inline double degrees_to_radians(double degrees) {
    return degrees * pi / 180.0;
}

// Common Headers
#include "color.h"
#include "ray.h"
#include "vec3.h"
#include "interval.h"

#endif //RAY_TRACING_IN_ONE_WEEKEND_RTWEEKEND_H

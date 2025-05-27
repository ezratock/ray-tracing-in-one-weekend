//
// Created by Ezra Tock on 5/27/25.
//

#ifndef RAY_TRACING_IN_ONE_WEEKEND_RAY_H
#define RAY_TRACING_IN_ONE_WEEKEND_RAY_H

#include "vec3.h"

class ray {
private:
    point3 orig;
    vec3 dir;
public:
    ray(const point3& origin, const vec3& direction);

    const point3& origin() const;
    const vec3& direction() const;

    vec3 at(double t) const;
};

#endif //RAY_TRACING_IN_ONE_WEEKEND_RAY_H
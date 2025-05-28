//
// Created by Ezra Tock on 5/28/25.
//

#ifndef RAY_TRACING_IN_ONE_WEEKEND_HITTABLE_H
#define RAY_TRACING_IN_ONE_WEEKEND_HITTABLE_H

#include "rtweekend.h"

class hit_record {
public:
    point3 p;
    vec3 normal;
    double t;
    bool front_face;

    void set_face_normal(const ray& r, const vec3& outward_normal);
};

class hittable {
public:
    virtual ~hittable();

    virtual bool hit(const ray& r, interval ray_t, hit_record& rec) const;
};

#endif //RAY_TRACING_IN_ONE_WEEKEND_HITTABLE_H

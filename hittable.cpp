//
// Created by Ezra Tock on 5/28/25.
//

#include "hittable.h"

void hit_record::set_face_normal(const ray &r, const vec3 &outward_normal) {
    // Sets the hit record normal vector.
    // NOTE: the parameter `outward_normal` is assumed to have unit length.

    front_face = dot(r.direction(), outward_normal) < 0;
    normal = front_face ? outward_normal : -outward_normal;
}

hittable::~hittable() = default;

bool hittable::hit(const ray &r, interval ray_t, hit_record &rec) const {
    return 0;
}
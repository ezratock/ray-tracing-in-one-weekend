//
// Created by Ezra Tock on 5/27/25.
//

#include "vec3.h"
#include "ray.h"

ray::ray(const point3& origin, const vec3& direction): orig{origin}, dir{direction} {};

const point3& ray::origin() const {return orig;}
const vec3& ray::direction() const {return dir;}

vec3 ray::at(double t) {
    return orig + t * dir;
}
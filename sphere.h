//
// Created by Ezra Tock on 5/28/25.
//

#ifndef RAY_TRACING_IN_ONE_WEEKEND_SPHERE_H
#define RAY_TRACING_IN_ONE_WEEKEND_SPHERE_H

#include "rtweekend.h"
#include "hittable.h"

class sphere : public hittable {
public:
    sphere(const point3& center, const double radius);
    bool hit(const ray& r, interval ray_t, hit_record& rec) const override;

private:
    point3 center;
    double radius;
};


#endif //RAY_TRACING_IN_ONE_WEEKEND_SPHERE_H

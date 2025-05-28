//
// Created by Ezra Tock on 5/28/25.
//

#ifndef RAY_TRACING_IN_ONE_WEEKEND_HITTABLE_LIST_H
#define RAY_TRACING_IN_ONE_WEEKEND_HITTABLE_LIST_H

#include "rtweekend.h"
#include "hittable.h"

#include <memory>

class hittable_list : public hittable {
public:
    std::vector<shared_ptr<hittable>> objects;
    hittable_list();
    hittable_list(shared_ptr<hittable> object);

    void clear();

    void add(shared_ptr<hittable> object);

    bool hit(const ray& r, interval ray_t, hit_record& rec) const override;


};


#endif //RAY_TRACING_IN_ONE_WEEKEND_HITTABLE_LIST_H

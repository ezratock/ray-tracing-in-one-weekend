//
// Created by Ezra Tock on 5/28/25.
//

#include "interval.h"
#include <limits>

const double infinity = std::numeric_limits<double>::infinity();

const interval interval::empty    = interval(+infinity, -infinity);
const interval interval::universe = interval(-infinity, +infinity);

interval::interval() : min(+infinity), max(-infinity) {}

interval::interval(double min, double max) : min(min), max(max) {}

double interval::size() const {
    return max - min;
}

bool interval::contains(double x) const {
    return min <= x && x <= max;
}

bool interval::surrounds(double x) const {
    return min < x && x < max;
}

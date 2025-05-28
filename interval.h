//
// Created by Ezra Tock on 5/28/25.
//

#ifndef RAY_TRACING_IN_ONE_WEEKEND_INTERVAL_H
#define RAY_TRACING_IN_ONE_WEEKEND_INTERVAL_H

class interval {
public:
    double min, max;

    interval();
    interval(double min, double max);

    double size() const;

    bool contains(double x) const;

    bool surrounds(double x) const;

    static const interval empty, universe;
};

#endif //RAY_TRACING_IN_ONE_WEEKEND_INTERVAL_H

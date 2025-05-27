cmake_minimum_required(VERSION 3.30)
project(ray_tracing_in_one_weekend)

set(CMAKE_CXX_STANDARD 23)

add_executable(ray_tracing_in_one_weekend main.cpp
        generate_redgreen_ppm.cpp
        generate_redgreen_ppm.h
        vec3.cpp
        vec3.h
        color.h
        ray.h)

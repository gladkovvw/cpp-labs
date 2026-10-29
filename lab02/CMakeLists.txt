cmake_minimum_required(VERSION 3.20)
project(lab02)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(lab02
    main.cpp
    menu.cpp
    tasks_1_iterators.cpp
    tasks_2_insert.cpp
    tasks_3_erase.cpp
    tasks_4_algorithms.cpp
    tasks_5_find.cpp
    tasks_6_modify.cpp
    tasks_7_sort.cpp
    tasks_8_numeric.cpp
    tasks_9_set.cpp
    tasks_10_map.cpp
)

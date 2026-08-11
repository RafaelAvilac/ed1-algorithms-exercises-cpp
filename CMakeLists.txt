cmake_minimum_required(VERSION 4.3)
project(ed1_algorithms_exercises_cpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(ed1_algorithms_exercises_cpp main.cpp
        src/main/cpp/dev/rafael/exercises/list01_algorithms/Exer01TwoSum.h
        src/main/cpp/dev/rafael/exercises/list01_algorithms/Exer02RemoveDuplicates.h
        src/main/cpp/dev/rafael/exercises/list01_algorithms/Exer03ReverseString.h
        src/main/cpp/dev/rafael/exercises/list01_algorithms/Exer04MoveZeroes.h
        src/main/cpp/dev/rafael/exercises/list01_algorithms/Exer05MajorityElement.h
        src/main/cpp/dev/rafael/exercises/list01_algorithms/Exer06ContagemMariana.h
        src/main/cpp/dev/rafael/exercises/list01_algorithms/Exer07DatasDuvidosas.h)

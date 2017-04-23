cmake_minimum_required(VERSION 3.5)

project(a2de)
set(CMAKE_BUILD_TYPE Debug)

include_directories(include/a2de)
include_directories(include/a2de/private)

set(SOURCES src/main.cpp)

add_library(a2de STATIC ${SOURCES})

install(DIRECTORY include/ DESTINATION /usr/local/include)


install(TARGETS a2de ARCHIVE DESTINATION /usr/local/lib)

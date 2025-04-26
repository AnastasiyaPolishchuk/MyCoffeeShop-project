cmake_minimum_required(VERSION 3.10.0)
project(jeffreys VERSION 0.1.0 LANGUAGES C CXX)
set(CMAKE_CXX_STANDARD 20)

add_subdirectory(app) #вставляет cmake из app
add_subdirectory(src)


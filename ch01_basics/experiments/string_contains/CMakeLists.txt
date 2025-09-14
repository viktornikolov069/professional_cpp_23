cmake_minimum_required(VERSION 3.24)
project(ex_1)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCE_FILES
    main.cpp)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

# target_include_directories(${PROJECT_NAME} PRIVATE include)
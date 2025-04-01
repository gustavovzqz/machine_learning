project(MachineLearning)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(PROJECT_ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR})
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic")

find_package(Eigen3 3.3 REQUIRED NO_MODULE)

include_directories(${PROJECT_ROOT_DIR}) 

add_subdirectory(main)



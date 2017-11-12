cmake_minimum_required(VERSION 3.9)
project(explorer)

find_package(Wt)

file(GLOB sources ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

add_executable(expl.wt ${sources})
target_link_libraries(expl.wt Wt::HTTP)

target_compile_features(expl.wt PRIVATE cxx_std_17)

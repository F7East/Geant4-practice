cmake_minimum_required(VERSION 3.16)

project(Simulation)

find_package(Geant4 REQUIRED ui_all vis_all)
include(${Geant4_USE_FILE})

file(GLOB sources_all ${PROJECT_SOURCE_DIR}/*.cc)
file(GLOB headers_all ${PROJECT_SOURCE_DIR}/*.hh)

add_executable(action action.cc generator.cc ${sources_all} ${headers_all})
add_executable(sim sim.cc construction.cc physics.cc action.cc detector.cc ${sources_all} ${headers_all})

target_link_libraries(action ${Geant4_LIBRARIES})
target_link_libraries(sim ${Geant4_LIBRARIES})

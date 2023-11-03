cmake_minimum_required(VERSION 3.27.7)
project("engine-creation")

include_directories("${CMAKE_CURRENT_SOURCE_DIR}/../../rendering/include")
message(WARN ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(create-engine main.c)

target_link_libraries(create-engine librendering)
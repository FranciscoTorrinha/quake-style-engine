cmake_minimum_required(VERSION 3.27.7)
project("rendering")

include_directories([include])
find_package(GLEW REQUIRED)
find_package(SDL2 REQUIRED)

add_library(librendering glcore.c)

target_include_directories(librendering PUBLIC ${SDL2_INCLUDE_DIRS})
target_include_directories(librendering PUBLIC ${OPENGL_INCLUDE_DIR})
target_include_directories(librendering PUBLIC ${GLEW_INCLUDE_DIR})


target_link_libraries(librendering ${SDL2_LIBRARIES})
target_link_libraries(librendering ${OPENGL_LIBRARIES})
target_link_libraries(librendering GLEW)

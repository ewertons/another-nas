cmake_minimum_required(VERSION 2.8.11)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Werror")

add_subdirectory(deps/c-utility)
add_subdirectory(deps/uhttp)
add_subdirectory(another-nas)

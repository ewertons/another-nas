cmake_minimum_required(VERSION 2.8.11)

project(another-nas)

set (source_files 
    ./src/main.c
)

set (header_files 
)

include_directories(
    ${SHARED_UTIL_INC_FOLDER}
)

add_executable(another-nas ${source_files} ${header_files})

target_link_libraries(another-nas 
    aziotsharedutil
)


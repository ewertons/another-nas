cmake_minimum_required(VERSION 2.8.11)

project(httpserver)

get_filename_component(HTTP_SERVER_FOLDER ${CMAKE_CURRENT_LIST_DIR} ABSOLUTE)
set(HTTP_SERVER_FOLDER "${HTTP_SERVER_FOLDER}" CACHE INTERNAL "" FORCE)
set(HTTP_SERVER_INC_FOLDER ${HTTP_SERVER_FOLDER}/inc CACHE INTERNAL "")

include_directories(
    ${HTTP_SERVER_INC_FOLDER}
    ${UTILS_INC_FOLDER}
    ${HTTP_PARSER_INC_FOLDER}
)

set (header_files
    ./inc/http_server.h
)

set (source_files 
    ./src/http_server.c
)

add_library(httpserver ${source_files} ${header_files})

target_link_libraries(httpserver
    utils
    httpparser
)

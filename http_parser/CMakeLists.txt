cmake_minimum_required(VERSION 2.8.11)

project(httpparser)

get_filename_component(HTTP_PARSER_FOLDER ${CMAKE_CURRENT_LIST_DIR} ABSOLUTE)
set(HTTP_PARSER_FOLDER "${HTTP_PARSER_FOLDER}" CACHE INTERNAL "" FORCE)
set(HTTP_PARSER_INC_FOLDER ${HTTP_PARSER_FOLDER}/inc CACHE INTERNAL "")

include_directories(
    ${HTTP_PARSER_INC_FOLDER}
    ${UTILS_INC_FOLDER}
)

set (header_files
    ./inc/http_header.h
    ./inc/http_request.h
    ./inc/http_response.h
    ./inc/http_response_codes.h
    ./inc/http_parser.h
)

set (source_files 
    ./src/http_parser.c
)

add_library(httpparser ${source_files} ${header_files})

target_link_libraries(utils)

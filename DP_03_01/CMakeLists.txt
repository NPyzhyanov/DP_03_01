cmake_minimum_required(VERSION 3.5)

project(DP_03_01 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(HEADERS_LIST
    logcommand.h
    log2console.h
    log2file.h
    print.h
    )
set(SRC_LIST
    log2console.cpp
    log2file.cpp
    print.cpp
    )

add_executable(${PROJECT_NAME} main.cpp ${HEADERS_LIST} ${SRC_LIST})

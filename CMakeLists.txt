cmake_minimum_required(VERSION 3.8)

project(FileApi)

if(MSVC)
add_definitions(-D_CRT_SECURE_NO_WARNINGS)
endif()

include_directories(include)

file(GLOB SOURCES
    src/Win32FileSystem.c
    src/common.c
    src/main.c
    )

add_executable(FileApi ${SOURCES})
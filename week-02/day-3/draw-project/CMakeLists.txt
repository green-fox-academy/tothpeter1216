cmake_minimum_required(VERSION 3.14)
project(draw_project)

set(CMAKE_CXX_STANDARD 14)

set(SDL2_ROOT_PATH C:/SDL2-2.0.8)

IF(WIN32)
    set(MINGW_VERSION i686-w64-mingw32)
ENDIF()

set(EXECUTABLES "draw2")
set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

find_package(GFA_SDL2 REQUIRED)
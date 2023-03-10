cmake_minimum_required(VERSION 3.10)

project(agadoEngine)

set (CMAKE_CXX_STANDARD 20)

# Project version
set(Example_VERSION_MAJOR 2)
set(Example_VERSION_MINOR 3)
set(Example_VERSION_PATCH 1)

# This project consist of components, each in one directory, so add each of them
add_subdirectory(Engine)
add_subdirectory(Editor)

#if(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR} CACHE PATH "Force path to set CMAKE_INSTALL_PREFIX" FORCE)
#endif(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
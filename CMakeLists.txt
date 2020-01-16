cmake_minimum_required(VERSION 3.14 FATAL_ERROR)

project(MyProject)

include(CTest)

set(BUILD_SHARED_LIBS no CACHE BOOL "")
set(CMAKE_CXX_STANDARD 11 CACHE STRING "")
set(CMAKE_CXX_STANDARD_REQUIRED yes CACHE STRING "")
set(CMAKE_CXX_EXTENSIONS no CACHE STRING "")

add_subdirectory(dependencies)

add_subdirectory(src)

if(TEST_MY_PROJECT OR CMAKE_SOURCE_DIR STREQUAL MyProject_SOURCE_DIR)
	add_subdirectory(tests)
endif()

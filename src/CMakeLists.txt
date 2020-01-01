add_library(hello-world)
target_sources(hello-world PRIVATE hello_world.cpp)
target_include_directories(hello-world PRIVATE ${MyProject_SOURCE_DIR}/include INTERFACE $<BUILD_INTERFACE:${MyProject_SOURCE_DIR}/include>)

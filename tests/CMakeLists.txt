add_executable(my-project-test)
target_sources(my-project-test PRIVATE main.cpp tests.cpp)

# Special include directory to satisfy ApprovalTests include of `catch.hpp`
FetchContent_GetProperties(Catch2)
target_include_directories(my-project-test PRIVATE ${Catch2_SOURCE_DIR}/single_include/catch2)

target_link_libraries(my-project-test PRIVATE ApprovalTests Catch2::Catch2 hello-world)
add_test(NAME my-project-test COMMAND my-project-test)

add_executable(my-project-test)
target_sources(my-project-test PRIVATE main.cpp tests.cpp)

target_link_libraries(my-project-test PRIVATE ApprovalTests::ApprovalTests Catch2::Catch2 hello-world)
add_test(NAME my-project-test COMMAND my-project-test)

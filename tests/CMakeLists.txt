add_executable(my-project-test)
target_sources(my-project-test PRIVATE main.cpp tests.cpp)

target_link_libraries(my-project-test PRIVATE ApprovalTests Catch2::Catch2 hello-world)
if (TARGET Catch2::Catch2Main)
    # link Catch2::Catch2Main only if it exists (so probably catch2 v3)
    target_link_libraries(my-project-test PRIVATE Catch2::Catch2Main)
endif()

add_test(NAME my-project-test COMMAND my-project-test)

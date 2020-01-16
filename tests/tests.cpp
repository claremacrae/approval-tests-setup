#include <catch2/catch.hpp>
#include <ApprovalTests.hpp>
#include <my_project/hello_world.hpp>

TEST_CASE("test hello-world") {
    ApprovalTests::Approvals::verify(my_project::hello_world());
}

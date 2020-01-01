include(FetchContent)

FetchContent_Declare(ApprovalTests
                     GIT_REPOSITORY https://github.com/approvals/ApprovalTests.cpp.git
                     GIT_TAG 9b8757610abc4bf756179f29fe8808a38acd573f)

FetchContent_Declare(Catch2
                     GIT_REPOSITORY https://github.com/catchorg/Catch2.git
                     GIT_TAG v2.11.1)

FetchContent_MakeAvailable(ApprovalTests Catch2)

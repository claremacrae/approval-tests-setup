include(FetchContent)

if (NOT TARGET ApprovalTests)
    FetchContent_Declare(ApprovalTests
                         GIT_REPOSITORY https://github.com/approvals/ApprovalTests.cpp.git
                         GIT_TAG 9b8757610abc4bf756179f29fe8808a38acd573f)
    FetchContent_MakeAvailable(ApprovalTests)

endif ()

if (NOT TARGET Catch2)
    FetchContent_Declare(Catch2
                         GIT_REPOSITORY https://github.com/catchorg/Catch2.git
                         GIT_TAG v2.11.1)
    FetchContent_MakeAvailable(Catch2)
endif ()

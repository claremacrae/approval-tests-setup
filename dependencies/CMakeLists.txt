include(FetchContent)

if (NOT TARGET ApprovalTests)
    FetchContent_Declare(ApprovalTests
                         GIT_REPOSITORY https://github.com/approvals/ApprovalTests.cpp.git
                         GIT_TAG 73c09d0f855a63eb89aa4b883f5b834cd8f3f9c5)
    FetchContent_MakeAvailable(ApprovalTests)

endif ()

if (NOT TARGET Catch2)
    FetchContent_Declare(Catch2
                         GIT_REPOSITORY https://github.com/catchorg/Catch2.git
                         GIT_TAG v2.11.1)
    FetchContent_MakeAvailable(Catch2)
endif ()

include(FetchContent)

if (NOT TARGET ApprovalTests)
    FetchContent_Declare(ApprovalTests
                         GIT_REPOSITORY https://github.com/approvals/ApprovalTests.cpp.git
                         GIT_TAG 8a3f68eb9cce8ea9a9ec2c32887b3fcfc54b058c)
    FetchContent_MakeAvailable(ApprovalTests)

endif ()

if (NOT TARGET Catch2)
    FetchContent_Declare(Catch2
                         GIT_REPOSITORY https://github.com/catchorg/Catch2.git
                         GIT_TAG v2.11.1)
    FetchContent_MakeAvailable(Catch2)
endif ()

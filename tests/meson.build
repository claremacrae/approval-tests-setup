
my_project_test = executable('my-project-test',
       [
       'main.cpp',
       'tests.cpp',
       ],
       dependencies : [catch2_dep, approvalstests_dep],
       include_directories : include_directories('../include'),
       link_with: hello_world
)

test('1)  Tests', my_project_test)
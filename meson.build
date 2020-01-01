project('MyProject', 'cpp', default_options : ['cpp_std=c++11'])

catch2_dep = dependency('catch2', fallback : ['catch2', 'catch2_dep'])
approvalstests_dep = dependency('approvaltests', fallback : ['approvaltests', 'approvaltests_dep'])

subdir('src')
subdir('tests')


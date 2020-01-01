approval-tests-setup
===

An example project using CMake's ```FetchContent``` module with ApprovalTests.
In addition also uses [Meson](https://mesonbuild.com/) build framework to
build the same example.


Dependencies
---
A fairly recent version of [CMake](https://cmake.org/download/) is required, at least 3.14.
[Git](https://git-scm.com/downloads) is also required for CMake to fetch other dependencies.
Meson 0.50.0 have been used to test the meson build.
This project defaults to using the C++11 standard and a compliant compiler is recommended.


Build
---

#### CMake
A standard CMake install should build this project.
Please note that the Ninja generator is not supported by the ApprovalTests Catch2 integration.
The test will fail if Ninja is used as the build generator.
Otherwise, the following example code should build for any single-configuration generator.
```bash
mkdir build
cmake ..
cmake --build .
```
A multi-configuration generator must specify the configuration of the build.
The following command specifies the *Release* configuration.
```bash
cmake --build . --config Release
```

#### Meson

You could use the `meson_build.sh` script or run the individual commands.

```bash
meson build_meson -Db_coverage=true
ninja -C build_meson
ninja -C build_meson test
ninja -C build_meson coverage-html
```

Run
---
The tests can be run by simply invoking CTest in the build directory.
```bash
ctest
```

Install
---
This project is not currently meant to be installed.

Open Source Software
---
This project is powered by open source projects 🥰
-   [ApprovalTests.cpp](https://github.com/approvals/ApprovalTests.cpp)
-   [Catch2](https://github.com/catchorg/Catch2)
-   [CMake](https://cmake.org)
-   [Meson](https://mesonbuild.com/)
-   [Git](https://git-scm.com)

License
---
This project is licensed under the [MIT license](LICENSE).

Authors
---
-   **Jordan Williams** - [Github](https://github.com/athrun22)
-   **Anders Arnholm** - [Github](https://github.com/balp)

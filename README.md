# Welcome to HelloWorld




# Prerequisites

Building HelloWorld requires the following software installed:

* A C++20-compliant compiler
* CMake `>= 3.9`
* The testing framework [Catch2](https://github.com/catchorg/Catch2) for building the test suite

# Building HelloWorld

The following sequence of commands builds HelloWorld.
It assumes that your current working directory is the top-level directory
of the freshly cloned repository:

```
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Debug -DCMAKE_INSTALL_PREFIX:PATH=. ..
cmake --build .
```

The build process can be customized with the following CMake variables,
which can be set by adding `-D<var>={ON, OFF}` to the `cmake` call:

* `BUILD_TESTING`: Enable building of the test suite (default: `ON`)



# Testing HelloWorld

When built according to the above explanation (with `-DBUILD_TESTING=ON`),
the C++ test suite of `HelloWorld` can be run using
`ctest` from the build directory:

```
cd build
ctest
```


# Documentation

HelloWorld *should* provide a documentation.

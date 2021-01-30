# cmake_precompiled_header_example
A minimal working exampe of CMake's precompiled header feature (introduced in CMake 3.16).

Precompiled headers are a very useful tool to speed up build time, especially for large projects.
They are in no way specific only to CMake, but as of CMake 3.16 they offer built-in support for
generating them. This project is meant to be a minimal working example for anyone unfamiliar with 
how to make use of them in their own CMake project.

The CMake documentation explains precompiled headers as:
> Precompiling header files can speed up compilation by creating a partially processed version of some header files, 
> and then using that version during compilations rather than repeatedly parsing the original headers.

The CMake documentation about about precompiled headers can be found [here](https://cmake.org/cmake/help/git-stage/command/target_precompile_headers.html).


## Building
You can build the project with the following command:

```
mkdir build && cd build
cmake ..
make
```

## Running
Run the example with:

```
.build/cmake_precompiled_header_example
```

This should print out the following to the terminal: 

```
Hello world
Precompiled headers are cool!
This also works!
This header should not be changed often. 

```

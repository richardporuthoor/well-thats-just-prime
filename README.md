# Hello World (C++)

## Background

You can find the instructions for this lab [here](https://morethanequations.com/Computer-Science/Labs/2024-12-10-hello-world). Update `main.cpp` with the code for your submission.

## (Optional) CMake Setup

[CMake](https://cmake.org/) is a build system that allows you to compile, build, test, and manage C++ projects. It is a powerful utility with a bit of a learning curve. You do not have to use CMake for our classes, but you are welcome to use the utility to manage your project. Additionally, many editors and IDEs interface very nicely with CMake.

### Building and Running the Program

First, clone this repository to your computer. Then, you can build the project by running the following commands in the root of the project:

```bash
cmake -S . -B build
cmake --build build
```

This will generate a `build` directory with a [Makefile](https://makefiletutorial.com/) and executable. You can run the program by running:

```bash
build/hello
```

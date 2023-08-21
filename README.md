# Apache AGE Internship 2023 Coding Test – Question No.2

The project implements a recursive relation with three different algorithms

## Description

The project implements the following piecewise recurrence relation in the 3 different ways.
Investigates the differences (advantages, disadvantages) between the 3.
F(n) = F(n-3) + F(n -2) where F(0) = 0, F(1) = 1, and F(2) = 2.

## Getting Started

### Dependencies

*Prerequisites, libraries, OS version, etc., needed before installing program.
* MacOS 12.2
* IDE - CLion
* C99 - C compiler

### Installing

* Download cmake build files to compile the project
* OR create a new project in CLion and add the source files from gitHub
```
https://github.com/ThandazaniG/ApacheProject.git
```
* CLion, CMakeLists.txt needs to be configured to declare add_executable()


### Executing program

* Ensure that main.c is added in add_executable() in the CMakeLists.txt file
```
cmake_minimum_required(VERSION 3.17)
project("insert projectName here" C)
set(CMAKE_C_STANDARD 99)
add_executable(QuestionOneProject main.c)
```
* Run the main.c file

## Authors
Thandazani Gwampa

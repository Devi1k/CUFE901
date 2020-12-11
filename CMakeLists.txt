cmake_minimum_required(VERSION 3.15)
project(Code C)

set(CMAKE_C_STANDARD 99)

add_executable(Real real/2016/4.2.c)
add_executable(main main.c)
add_executable(Input IO/IOinput.c)
add_executable(exercises exercises/5.80.c)
add_executable(exercisesAC exerciseAfterClass/Chapter7/3.7.c)
add_executable(Tan TanHaoQiang/Chapter9/9.11.c)
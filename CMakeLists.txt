cmake_minimum_required(VERSION 3.15)
project(Code C)

set(CMAKE_C_STANDARD 99)

add_executable(Real real/2018/5.1.c)
add_executable(main main.c)
add_executable(Input IO/IOinput.c)
add_executable(exercises exercises/6.135.c)
add_executable(exercisesAC exerciseAfterClass/Chapter9/3.4.c)
add_executable(Tan TanHaoQiang/Chapter5/5.16.c)
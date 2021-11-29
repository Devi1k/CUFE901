cmake_minimum_required(VERSION 3.15)
project(Code C)

set(CMAKE_C_STANDARD 99)

add_executable(Input IO/IOinput.c)
add_executable(exercises exercises/5.80.c )
add_executable(exercisesAC exerciseAfterClass/Chapter7/3.7.c)
add_executable(Tan TanHaoQiang/Chapter8/8.10.c)
add_executable(Strategy Strategy/4.15.c)
add_executable(real real/2011/5.6.c)
add_executable(main main.c)

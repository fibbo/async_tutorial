cmake_minimum_required(VERSION 3.12)


project(movie-async)

set(CMAKE_CXX_STANDARD 11)

set(SRC 
  perlin_noise.cpp
  ppm.cpp
  )

add_executable(movie-async-thread ${SRC} movie_async_ctrl_threads.cpp)
add_executable(movie-async ${SRC} movie_async.cpp)
add_executable(movie-serial ${SRC} movie_serial.cpp)

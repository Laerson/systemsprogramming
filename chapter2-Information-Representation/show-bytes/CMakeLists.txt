cmake_minimum_required(VERSION 3.10)
project(test_show_bytes)

set(CMAKE_C_STANDARD 99)

add_executable(test_show_bytes test-show-bytes.c show-bytes.c)
cmake_minimum_required(VERSION 3.12)
project(amir_tests)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
set(GTEST_ROOT google_test/googletest)

add_library(gtest STATIC
  ${GTEST_ROOT}/src/gtest_main.cc
  ${GTEST_ROOT}/src/gtest-all.cc
)
target_include_directories(gtest PUBLIC ${GTEST_ROOT}/include)
target_include_directories(gtest PRIVATE ${GTEST_ROOT})

add_library(libs STATIC lib/Prog2.cpp lib/Prog2.h)
target_include_directories(libs PUBLIC lib)

add_executable(main main.cpp)
add_executable(test_cpp test_1.cpp)
target_link_libraries(test_cpp libs gtest)
target_link_libraries(main libs)

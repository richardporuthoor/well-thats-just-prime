cmake_minimum_required(VERSION 3.24)
project(well-thats-just-prime)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.8.1
)

FetchContent_MakeAvailable(Catch2)

add_executable(factorizer_test tests/factorizer_test.cpp src/factorizer.cpp)
target_include_directories(factorizer_test PRIVATE src)

target_link_libraries(factorizer_test PRIVATE Catch2::Catch2WithMain)

enable_testing()
add_test(NAME FactorizerTest COMMAND factorizer_test)

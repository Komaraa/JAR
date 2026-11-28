cmake_minimum_required(VERSION 3.22)

project(RobotSupervisor LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

add_executable(robot_tests
    tests/sample_test.cpp
    tests/RobotTests.cpp
    src/Robot.cpp
)


find_package(Catch2 CONFIG REQUIRED)

target_link_libraries(robot_tests PRIVATE Catch2::Catch2WithMain)


target_include_directories(robot_tests PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

include(CTest)

add_test(
    NAME robot_tests
    COMMAND robot_tests
)
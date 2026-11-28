#include <catch2/catch_test_macros.hpp>
#include "Robot.hpp"



TEST_CASE("A robot remembers its identifier")
{
    // Arrange
    Robot robot( "R2D2" );

    // Act
    auto identifier = robot.getName() ;

    // Assert
    REQUIRE( identifier == "R2D2" );
}

TEST_CASE("A robot can tell how much battery it has left")
{
    // Arrange
    Robot robot( "R2D2" );

    // Act
    auto battery_level = robot.getBatteryLevel() ;

    // Assert
    REQUIRE( battery_level == 100 );
}
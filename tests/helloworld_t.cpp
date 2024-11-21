#define CATCH_CONFIG_MAIN
#include "helloworld/helloworld.hpp"
#include <catch2/catch_test_macros.hpp>

using namespace helloworld;

TEST_CASE( "add_one", "[adder]" ){
  REQUIRE(add_one(0) == 1);
  REQUIRE(add_one(123) == 124);
  REQUIRE(add_one(-1) == 0);
}
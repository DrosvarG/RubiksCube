#include <catch2/catch_test_macros.hpp>

#include "HelloWorld.h"

TEST_CASE(R"(HelloMessage say "Hello CMake." )")
{
    REQUIRE(helloworld::GetHelloMessage() == "Hello CMake.");
}

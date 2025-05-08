#include <gtest/gtest.h>
#include "example_lib/example.hh"

TEST(ExampleTest, BasicAssertions) {
    EXPECT_EQ(1, 1);
    EXPECT_TRUE(true);
}
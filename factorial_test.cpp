#include "gtest/gtest.h"

#include "factorial.hpp"

TEST(factorial, normal)
{
    EXPECT_EQ(factorial(1), 1);
    EXPECT_EQ(factorial(2), 2);
    EXPECT_EQ(factorial(3), 6);
    EXPECT_EQ(factorial(4), 24);
    EXPECT_EQ(factorial(10), 3628800);
}

TEST(factorial, zero)
{
    EXPECT_EQ(factorial(0), 1);
}

TEST(factorial, negative_numbers)
{
    EXPECT_EQ(factorial(-1), -1);
}

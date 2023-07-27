#include <gtest/gtest.h>

#include <libsolver/sqrt.hpp>

TEST(sqrt, sqrtMain)
{
    ASSERT_EQ(solver::sqrt(4.0), 2.0);
}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

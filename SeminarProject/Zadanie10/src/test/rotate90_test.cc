#include <gtest/gtest.h>
#include <array>
#include <myproject/rotate90.h>


TEST(ROTATE90, MULTIPLICITY){
    Coordinates<int> a =Coordinates<int> (1, 2);
    EXPECT_FALSE(rotate90(a, 30));
}

TEST(ROTATE90, CCW){
    Coordinates<int> a =Coordinates<int> (1, 2);
    rotate90(a, 90);
    EXPECT_EQ(-2, a.x);
    EXPECT_EQ(1, a.y);
}

TEST(ROTATE90, CW){
    Coordinates<int> a =Coordinates<int> (1, 2);
    rotate90(a, -90);
    EXPECT_EQ(2, a.x);
    EXPECT_EQ(-1, a.y);
}

#include <gtest/gtest.h>
#include <Prog2.h>
using namespace prog2;

TEST(MainTest, FirstTest)
{
  Evolvent e(3, 1, 4);
  Point cd(1,1);
  e.get_coords(cd);
  EXPECT_EQ(cd.x, 1);
  EXPECT_EQ(cd.y, 4);
  // EXPECT_EQ(1,1);
}

int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

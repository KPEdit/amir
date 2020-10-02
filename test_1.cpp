#include <gtes/gtest.h>
#include <prog1.h>
using namespace prog2;

TEST(MainTest, FirstTest)
{
  Evolvent e(3, 1, 4);
  Point cd();
  e.get_coords(cd);
  EXPECT_EQ(cd.x, 1);
  EXPECT_EQ(cd.y, 4);

}

int main(int argc, char *argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

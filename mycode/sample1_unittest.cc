#include "sample1.h"
#include <gtest/gtest.h>

TEST(AddTest, tc1)
{
	EXPECT_EQ(3, add(1,2));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

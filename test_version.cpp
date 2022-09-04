#include "lib.h"

#include "googletest/googlemock/include/gmock/gmock.h"
#include "googletest/googletest/include/gtest/gtest.h"

TEST(TestGroupName, Subtest_1) {
  ASSERT_TRUE(version() > 0);
}


int main(int argc, char **argv)
{

  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}

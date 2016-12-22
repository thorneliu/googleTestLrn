#include "sample1.h"
#include <gtest/gtest.h>

class thermometerTest : public ::testing::Test
{
public:
    thermometerTest(): t1(0.0), t2(0.0){};
protected:
    virtual void SetUp()
    {
        t1.setTempurature(10.0);
        t2.setTempurature(20.0);
    };

protected:
    thermometer t1;
    thermometer t2;
};

TEST_F(thermometerTest, getTempTest)
{
    EXPECT_FLOAT_EQ(10.0, t1.getTempurature());
    EXPECT_FLOAT_EQ(20.0, t2.getTempurature());
}

TEST_F(thermometerTest, compareThemter)
{
    EXPECT_TRUE(t1 < t2);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

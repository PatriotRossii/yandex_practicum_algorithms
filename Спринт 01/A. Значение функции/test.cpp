#include "gtest/gtest.h"

#include "solution.hpp"

namespace {

TEST(TestAChallenge, TestFunction) {
	EXPECT_EQ(function(-8, -5, -2, 7), -183);
	EXPECT_EQ(function(8, 2, 9, -10), 40);
}

}
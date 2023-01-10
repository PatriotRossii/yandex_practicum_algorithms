#include "gtest/gtest.h"

#include "solution.hpp"

namespace {

TEST(TestBChallenge, TestSamples) {
	EXPECT_EQ(
		gameTotal(3, {
			"1231", "2..2", "2..2", "2..2"
		}), 2
	);
	EXPECT_EQ(
		gameTotal(4, {
			"1111", "9999", "1111", "9911"
		}), 1
	);
	EXPECT_EQ(
		gameTotal(4, {
			"1111", "1111", "1111", "1111"
		}, 0);
	)
}

}
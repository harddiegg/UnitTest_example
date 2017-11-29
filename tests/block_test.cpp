#include <gtest/gtest.h>
#include "block_test.h"
#include "../block.c"

TEST_F(Block, blockGenerate) {
	EXPECT_EQ(blockGenerate(BLK_I), "++++");
	EXPECT_EQ(blockGenerate(BLK_O), "++\n++");
	EXPECT_EQ(blockGenerate(BLK_T), "+++\n-+-");
	EXPECT_EQ(blockGenerate(BLK_J), "+++\n--+");
	EXPECT_EQ(blockGenerate(BLK_L), "--+\n+++");
	EXPECT_EQ(blockGenerate(BLK_S), "-++\n++-");
	EXPECT_EQ(blockGenerate(BLK_Z), "++-\n-++");
}

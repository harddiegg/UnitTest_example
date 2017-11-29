#ifndef BLOCK_H
#define BLOCK_H

typedef enum {
	BLK_I,
	BLK_O,
	BLK_T,
	BLK_J,
	BLK_L,
	BLK_S,
	BLK_Z
} blockType_t;

typedef enum {
	BLK_STRAIGHT,
	BLK_FLIP_L,
	BLK_FLIP_R,
	BLK_FLIP_REV
} blockRotate_t;

const char* blockGenerate(const blockType_t type);

#endif

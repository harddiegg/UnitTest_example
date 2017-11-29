#include "block.h"

const char* blockData[] = {
	"++++",
	"++" "\n" "++",
	"+++" "\n" "-+-",
	"+++" "\n" "--+",
	"--+" "\n" "+++",
	"-++" "\n" "++-",
	"++-" "\n" "-++"
};

const char* blockGenerate(const blockType_t type) {
	return blockData[type];
}

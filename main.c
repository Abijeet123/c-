#include "common.h"
#include "chunk.h"
#include "debug.h"
#include "vm.h"

int main(int argc, char **argv) {
	initVM();

	Chunk chunk;
	initChunk(&chunk);
	int constant = addConstant(&chunk, 1.2);
	writeChunk(&chunk, OP_CONSTANT);
	writeChunk(&chunk, constant);
	constant = addConstant(&chunk, 1.3);
	writeChunk(&chunk, OP_CONSTANT);
	writeChunk(&chunk, constant);
	writeChunk(&chunk, OP_DIVIDE);
	writeChunk(&chunk, OP_RETURN);
	
	
	//disassembleChunk(&chunk, "test chunk");
	interpret(&chunk);
	freeVM();
	freeChunk(&chunk);
	return 0;
}

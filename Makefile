c-: scanner.c compiler.c vm.c value.h value.c debug.c debug.h chunk.c chunk.h memory.c main.c
	gcc scanner.c compiler.c common.h vm.c value.c debug.c chunk.c memory.c main.c  -o c-




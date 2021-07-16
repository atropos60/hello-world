#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
	printf("hello world wide web from process ID %ld\n", (long)getpid());
	exit(0);
}

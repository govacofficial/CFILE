#include <stdio.h>

int main(int argc, char const *argv[])
{

	for(int c; c != EOF; c = getchar())
		putchar(c);

	printf("\nFIN\n");
	return 0;
}
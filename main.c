#include <stdio.h>

void pairodd(int a, int b){
	for(int i = a; i <= b; i += 2){
		printf("%d,", i);
	}

	printf("\n");
      
    for (int i = a+1; i <= b; i += 2)
    {
        printf("%d,", i);
    }
	printf("\n");
}


int main(int argc, char const *argv[])
{
	int a, b;
	printf("(1) --> ");
	scanf("%d", &a);
	printf("\n(1) --> ");
	scanf("%d", &b);
	printf("\n");

	pairodd(a, b);
	return 0;
}
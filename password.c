#include <stdio.h>
#include <string.h>

#define N 31

int *password()
{
	static int str[N];
	str[N] = '\0';
	for (int i = 0; i < N - 1; ++i)
		str[i] = 0;

	for(int i = 0, c = getchar(); i < N - 1 && c != '\n' && c != EOF; c = getchar(), ++i)
		str[i] = c;

	return str;
}

void new_password(int *str)
{
	for(int i = 0; str[i] != '\0'; i++)
	{
		if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			switch(str[i])
			{
				case 'A':
					printf("C_");
					break;
				case 'Z':
					printf("V_");
					break;
				case 'a':
					printf("W_");
					break;
				case 'z':
					printf("X_");
					break;
				case '0':
					printf("9");
					break;
				case '9':
					printf("0");
					break;
				default:
					putchar(str[i] - 1);
			}
		}else if(str[i] == ' ')
			printf("-");
		else
			printf("mio");
	}
}

int main()
{
	new_password(password());
	printf("\n");
	return 0;
}
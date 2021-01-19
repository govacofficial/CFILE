#include <stdio.h>

#define N 30

struct Word{
	char str[N+1];
	int len;
};


void array(struct Word);

void putword(struct Word);

int main(int argc, char const *argv[])
{
	
	return 0;
}


void array(struct Word w)
{
	w.len = 0;

	for(int i = 0; i < N; i++)
		w.str[i] = '.';

	w.str[N+1] = '\0';
}

void putword(struct Word w)
{
	for(int c = getchar(); w.len < N && c != '\n' && c != EOF; w.len++, c = getchar())
		if((c >= 'A' && c <= 'Z') || (c >= 'a' && c < 'z') || (c >= '0' && c <= '9'))
			w.str[w.len] = putchar(c);
		else if(c == '_' || c == '-' || c == '#')
			w.str[w.len] = putchar(c);
		else
			w.str[w.len] = putchar('%');
}


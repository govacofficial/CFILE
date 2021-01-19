/* Convertir Grados Fahren a Centigrados , ciendo °C = (5/9) * (F - 32) */

#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

int main()
{
	for (float fahr = LOWER; fahr <= UPPER; fahr += STEP)
	{
		printf("%3.0f\t%6.1f\n", fahr, 5.0/9.0 * (fahr - 32));
	}
	
	return 0;
}
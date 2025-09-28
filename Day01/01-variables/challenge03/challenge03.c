#include <stdio.h>

int main()
{
	   float   km;
	   float   yards;
	
	   printf("entrez la distance en km: ");
	   scanf("%f", &km);

		yards = km * 1093.61;
		printf("la distance en yards est: %.2f", yards);
}

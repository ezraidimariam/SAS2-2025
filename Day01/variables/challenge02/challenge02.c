#include <stdio.h>

int main()
{
	float	c;
	float	k;

	printf("entrez la valeur de celsius: ");
	scanf("%f", &c);

	k = 273.15 + c;
	printf("la température en kelvin est: %.2f", k);
}

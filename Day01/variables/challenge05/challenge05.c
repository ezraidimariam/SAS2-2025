#include <stdio.h>

int	main()
{
	float	c;

	printf("entrez la température en Celsius: ");
	scanf("%f", &c);

	if (c < 0)
	{
		printf("etat du l`eau est solide");
	}
	else if (c < 100 && c >= 0)
	{
		printf("etat du l`eau est liquid");
	}
	else
	{
		printf("etat du l`eau est gaz");
	}
}

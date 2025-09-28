#include <stdio.h>

int	main()
{
	int	somme;
	int	a;
	int	b;

	printf("entrez les deux valeurs : ");
	scanf("%d\n%d", &a, &b);

	if(a == b)
	{
		somme = (a + b) * 3;
		printf("%d", somme);
	}
	else
	{
		somme = (a + b);
		printf("%d", somme);
	}
}

#include <stdio.h>

int	main()
{
	int	i = 0;
	int	n, num;

	printf("entrez le nombre des elements du tableau : ");
	scanf("%d", &n);

	int tab[n];
	printf("saisez ces elements: ");

	while (i < n)
	{
		scanf("%d", &tab[i]);
		i++;
	}
	i = 0;
	printf("Les éléments saisis sont : ");
	while (i < n)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}

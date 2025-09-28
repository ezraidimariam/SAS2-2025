#include <stdio.h>

int	main()
{
	int	n;
	int	somme;
	int	i = 0;
	int	res = 0;

	printf("entrez un nombre entier: ");
	scanf("%d", &n);

	while (i <= n)
	{
		res = res + i;
		i++;
	}
	printf("%d", res);
}

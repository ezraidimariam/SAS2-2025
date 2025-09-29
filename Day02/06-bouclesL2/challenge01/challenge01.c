#include <stdio.h>

int	main()
{
	int	i = 10;
	int	n;
	int	res;

	printf("entrez un nombre: ");
	scanf("%d", &n);

	while (i > 0)
	{
		 res = i * n;
		 printf("%d * %d = %d   ", i, n, res);
		i--;
	}
}

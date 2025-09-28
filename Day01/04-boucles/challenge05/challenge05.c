#include <stdio.h>

int	main()
{
	int	i = 0;
	int	p, n;
	int res;

	printf("entrez la puissance: ");
	scanf("%d", &p);

	printf("entrez l`entier: ");
	scanf("%d", &n);

	res = n;
	while (i < p - 1)
	{
		 res = res * n;
		i++;
	}
	printf("%d", res);
}

#include <stdio.h>

int	main()
{
	int	i = 1;
	int	n;
	int	res;

	printf("entrez le nombre: ");
	scanf("%d", &n);

	while (i <= 10)
	{
		 res = n * i;
		printf("%d * %d = %d\n", n, i, res);
		i++;
	}
}

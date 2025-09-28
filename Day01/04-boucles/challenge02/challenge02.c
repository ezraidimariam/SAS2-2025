#include <stdio.h>

int	main()
{
	int	n;
	int	i = 1;
	int	res = 1;

	printf("entrez un nombre positive : ");
	scanf("%d", &n);

	while (i <= n)
	{
		 res = res * i;
		i++;
	}
	printf("%d", res);
}

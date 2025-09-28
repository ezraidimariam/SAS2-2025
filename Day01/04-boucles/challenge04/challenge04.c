#include <stdio.h>

int	main()
{
	int	n;
	int	i = 0;
	int	num = 1;

	printf("entrez un nombre entier: ");
	scanf("%d", &n);

	while (i < n)
	{
		if (num % 2 != 0)
		{
			printf("%d ", num);
			i++;
		}
		num++;
	}
}

#include <stdio.h>

int	main()
{
	int	n;

	printf("entrez une valeur: ");
	scanf("%d", &n);

	while (n > 0)
	{
		int mod = n % 2;
		printf("%d", mod);
		 n /= 2;
	}
}

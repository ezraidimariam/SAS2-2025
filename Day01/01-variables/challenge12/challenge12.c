#include <stdio.h>

int	main()
{
	int	n;

	printf("entrez un nombre entier: ");
	scanf("%d", &n);

	while(n > 0)
	{
		int num = n % 10;
		printf("%d", num);
		n /= 10;
	}
}

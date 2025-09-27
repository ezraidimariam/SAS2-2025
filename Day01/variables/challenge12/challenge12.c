#include <stdio.h>

int	main()
{
	int	num;
	int	res = 0;
	printf("entrez un nombre: ");
	scanf("%d", &num);

	while (num > 0)
	{
		int mod = num % 10;
		int invers = res * 10 + mod;
		printf("%d", invers);
		num /= 10;
	}
}  

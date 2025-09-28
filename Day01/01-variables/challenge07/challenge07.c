#include <stdio.h>

int	main()
{
	int	n1, n2, n3;

	printf("entrez les 3 nombres");
	scanf("%d %d %d", &n1, &n2, &n3);

	int	moyenne = (n1 * 2 + n2 * 3 + n3 * 5) + 10;
	printf("la moyenne pondere est :%d", moyenne);
}

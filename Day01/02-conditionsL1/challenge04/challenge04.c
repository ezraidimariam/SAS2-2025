#include <stdio.h>
#include <math.h>

int	main()
{
	int	a;
	int	b;
	int	c;

	printf("entrez la valeur du a et b et c");
	scanf("%d\n%d\n%d", &a, &b, &c);

	int desc = (b * b) - (4 * a * c);
	
	if (desc > 0)
	{
		int x1 = (-b + sqrt(desc)) / (2 * a);
		int x2 = (-b - sqrt(desc)) / (2 * a);
		printf("ya deux solutions x1 =%d et x2 = %d", x1, x2);
	}
	else if (desc == 0)
	{
		int x1 = -b / 2 * a;
		printf("ya une seule solution x1 = %d", x1);
	}
	else
	{
		printf("ya aucune solution");
	}
}

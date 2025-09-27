#include <stdio.h>
#include <math.h>

int	main()
{
	int	a, b, x1, y1, z1, z2, y2, x2;

	printf("entrez la valeur du a et du b deux points donnés dans un espace 3D:" );
	scanf("%d\n%d", &a, &b);

	printf("entrez les coordonnes du a(x1, y1, z1): ");
	scanf("%d\n%d\n%d", &x1, &y1, &z1);
	printf("entrez les coordonnes du b(x2, y2, z2): ");
	scanf("%d\n%d\n%d", &x2, &y2, &z2);

	float distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
	printf("la distance entre 2 point est: %.2f", distance);
}

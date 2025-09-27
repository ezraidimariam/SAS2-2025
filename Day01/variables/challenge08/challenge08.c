#include <stdio.h>
#include <math.h>

int	main()
{
	float	a;
	float	b;
	float	c;

	printf("entrez 3 nombres: ");
	scanf("%f\n%f\n%f", &a, &b, &c);

	float	moyenne = pow(a * b * c, 1.0/3.0);
	printf("%f", moyenne);
}

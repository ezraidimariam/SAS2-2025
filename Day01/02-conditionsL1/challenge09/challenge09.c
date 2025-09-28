#include <stdio.h>

int	main()
{
	char c;
	
	printf("entrez un caracter");
	scanf("%c", &c);

	if (c >= 'a' && c <= 'z')
	{
		printf("il fait partie des alphabets et il est miniscule");
	}
	else if (c >= 'A' && c <= 'Z')
	{
		printf("il fait partie des alphabets et il est majiscule");
	}
	else
		printf("il n`appartient pas a les alphabets");
}
		


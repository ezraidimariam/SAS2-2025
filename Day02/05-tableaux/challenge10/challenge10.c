#include <stdio.h>

int main()
{
    int n, i, c;

    printf("Entrez le nombre des éléments du tableau : ");
    scanf("%d", &n);

    int tab[n];

    printf("Saisissez les éléments : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &tab[i]);
    }
	printf("entrez l`element : ");
	scanf("%d", &c);
	i = 0;
	while (i < n){
		if (c == tab[i]){
			printf("l`element est present: ");
			break;
		}
		i++;
	}
	if (i == n) {
		        printf("L`élément n`est pas présent.\n");
			    }
}

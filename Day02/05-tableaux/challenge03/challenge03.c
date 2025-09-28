#include <stdio.h>

int main()
{
    int i = 0;
    int n, somme = 0;

    printf("Entrez le nombre des éléments du tableau : ");
    scanf("%d", &n);

    int tab[n];

    printf("Saisissez ces éléments : ");
    while (i < n)
    {
        scanf("%d", &tab[i]);
        i++;
    }
    printf("la somme de ces éléments : ");
    i = 0;
    while (i < n)
    {
	    somme += tab[i];
	    i++;
    }
    printf("%d", somme);
}

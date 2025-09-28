#include <stdio.h>

int main()
{
    int n, i, c, num;

    printf("Entrez le nombre des éléments du tableau : ");
    scanf("%d", &n);

    int tab[n];

    printf("Saisissez les éléments : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &tab[i]);
    }

    printf("Entrez l`élément à remplacer : ");
    scanf("%d", &c);

    printf("Entrez la nouvelle valeur : ");
    scanf("%d", &num);

    for (i = 0; i < n; i++)
    {
        if (tab[i] == c) {
            tab[i] = num; 
        }
    }

    printf("Tableau après remplacement : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}



#include <stdio.h>

int main()
{
    int n, i;

    printf("Entrez le nombre des éléments du tableau : ");
    scanf("%d", &n);

    int original[n], copie[n];

    printf("Saisissez les éléments : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &original[i]);
    }

    for (i = 0; i < n; i++)
    {
        copie[i] = original[i];
    }

    printf("Tableau original : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", original[i]);
    }
    printf("\n");

    printf("Tableau copié :    ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", copie[i]);
    }
    printf("\n");

    return 0;
}


#include <stdio.h>

int main()
{
    int n, i, temp;

    printf("Entrez le nombre des éléments du tableau : ");
    scanf("%d", &n);

    int tab[n];

    printf("Saisissez les éléments : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &tab[i]);
    }

    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        temp = tab[start];
        tab[start] = tab[end];
        tab[end] = temp;

        start++;
        end--;
    }

    printf("Tableau inversé : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}


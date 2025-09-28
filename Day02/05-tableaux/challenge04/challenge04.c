#include <stdio.h>
int main()
{
    int i = 0;
    int n;

    printf("Entrez le nombre des éléments du tableau : ");
    scanf("%d", &n);

    int tab[n];

    printf("Saisissez ces éléments : ");
    while (i < n)
    {
        scanf("%d", &tab[i]);
        i++;
    }
	int max = tab[0];
	i = 1;
	while (i < n)
	{
		if (tab[i] > max){
				max = tab[i];
		}
		i++;
	}
	printf("%d", max);
}

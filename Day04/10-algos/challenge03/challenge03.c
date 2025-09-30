#include <stdio.h>

int main() {
    int tab[] = {5, 2, 9, 1, 5, 6};
    int n = 6;
    int i, j, min, tmp;

    printf("Avant tri: ");
    for(i = 0; i < n; i++) printf("%d ", tab[i]);
    printf("\n");

    for(i = 0; i < n-1; i++)
	 {
        min = i;
        for(j = i+1; j < n; j++) {
            if(tab[j] < tab[min]) min = j;
        }
        tmp = tab[i];
        tab[i] = tab[min];
        tab[min] = tmp;
    }

    printf("Apres tri: ");
    for(i = 0; i < n; i++) printf("%d ", tab[i]);
    printf("\n");

    return 0;
}

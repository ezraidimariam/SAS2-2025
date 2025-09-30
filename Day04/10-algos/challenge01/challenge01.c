#include <stdio.h>

int main() {
    int tab[] = {5, 2, 9, 1, 5, 6};
    int n = 6;
    int i, j, tmp;

    printf("Avant tri: ");
    for(i = 0; i < n; i++) printf("%d ", tab[i]);
    printf("\n");

    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(tab[j] > tab[j+1]) {
                tmp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = tmp;
            }
        }
    }

    printf("Apres tri: ");
    for(i = 0; i < n; i++) printf("%d ", tab[i]);
    printf("\n");

    return 0;
}


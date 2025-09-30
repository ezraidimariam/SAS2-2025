#include <stdio.h>

int main() {
    int tab[] = {5, 2, 9, 1, 5, 6};
    int n = 6;
    int i, j, cle;

    printf("Avant tri: ");
    for(i = 0; i < n; i++) printf("%d ", tab[i]);
    printf("\n");

    for(i = 1; i < n; i++) {
        cle = tab[i];
        j = i - 1;
        while(j >= 0 && tab[j] > cle) {
            tab[j+1] = tab[j];
            j--;
        }
        tab[j+1] = cle;
    }

    printf("Apres tri: ");
    for(i = 0; i < n; i++) printf("%d ", tab[i]);
    printf("\n");

    return 0;
}


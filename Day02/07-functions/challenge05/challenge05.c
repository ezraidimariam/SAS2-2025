#include <stdio.h>

int factorielle(int n) {
    int resultat = 1;
    for (int i = 1; i <= n; i++) {
        resultat *= i;
    }
    return resultat;
}

int main() {
    int n;

    printf("Entrez un entier positif : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erreur : la factorielle n'est pas définie pour les nombres négatifs.\n");
    } else {
        printf("La factorielle de %d est %d.\n", n, factorielle(n));
    }

    return 0;
}


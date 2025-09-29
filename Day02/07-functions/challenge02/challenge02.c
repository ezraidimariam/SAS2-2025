#include <stdio.h>

int produit(int a, int b) {
    return a * b;
}

int main() {
    int x, y;

    printf("Entrez le premier nombre : ");
    scanf("%d", &x);

    printf("Entrez le deuxième nombre : ");
    scanf("%d", &y);

    printf("Le produit de %d et %d est %d.\n", x, y, produit(x, y));

    return 0;
}


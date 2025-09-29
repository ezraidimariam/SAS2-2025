#include <stdio.h>

int maximum(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int x, y;

    printf("Entrez le premier nombre : ");
    scanf("%d", &x);

    printf("Entrez le deuxième nombre : ");
    scanf("%d", &y);

    printf("Le maximum entre %d et %d est %d.\n", x, y, maximum(x, y));

    return 0;
}


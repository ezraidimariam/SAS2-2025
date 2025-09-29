#include <stdio.h>


int minimum(int a, int b) {
    if (a < b)
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

    printf("Le minimum entre %d et %d est %d.\n", x, y, minimum(x, y));

    return 0;
}


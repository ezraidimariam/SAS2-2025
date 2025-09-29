#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, next;

    printf("Entrez le nombre de termes : ");
    scanf("%d", &n);

    printf("Suite de Fibonacci (%d termes) :\n", n);

    for (i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}

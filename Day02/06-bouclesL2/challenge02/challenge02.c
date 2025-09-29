#include <stdio.h>

int main() {
    int n, x, i, isPrime;

    printf("Entrez un nombre : ");
    scanf("%d", &n);

    printf("Nombres premiers entre 1 et %d :\n", n);

    for (x = 2; x <= n; x++) {
        isPrime = 1;

        for (i = 2; i <= x / 2; i++) { 
            if (x % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1) {
            printf("%d ", x);
        }
    }

    printf("\n");
    return 0;
}


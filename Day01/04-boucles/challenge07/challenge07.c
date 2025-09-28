#include <stdio.h>

int main() {
    int n;
    int chiffre;

    printf("Entrez un entier: ");
    scanf("%d", &n);

    printf("Entier inverse: ");

    while (n != 0) {
        chiffre = n % 10;  
        printf("%d", chiffre);
        n = n / 10;        
    }

    printf("\n");

}

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, longueur = 0;

    printf("Entrez une chaîne : ");
    scanf("%s", str); 

  
    while (str[i] != '\0') {
        longueur++;
        i++;
    }

    printf("La longueur de la chaîne est : %d\n", longueur);

    return 0;
}


#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];

    printf("Entrez la première chaîne : ");
    scanf("%s", s1); 

    printf("Entrez la deuxième chaîne : ");
    scanf("%s", s2);

  
    if (strcmp(s1, s2) == 0) {
        printf("Les chaînes sont égales.\n");
    } else {
        printf("Les chaînes sont différentes.\n");
    }

    return 0;
}


#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];

    printf("Entrez la première chaîne : ");
    scanf("%s", s1);

    printf("Entrez la deuxième chaîne : ");
    scanf("%s", s2);

    
    strcat(s1, s2);

    printf("Chaîne concaténée : %s\n", s1);

    return 0;
}


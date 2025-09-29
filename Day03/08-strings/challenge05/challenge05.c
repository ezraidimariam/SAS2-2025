#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;

    printf("Entrez une chaîne : ");
    scanf("%s", str);

    len = 0;
    while (str[len] != '\0') {
        len++; 
    }

    printf("Chaîne inversée : ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}


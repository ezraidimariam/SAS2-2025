#include <stdio.h>

int main() {
    char str[100], c;
    int i, count = 0;

    printf("Entrez une chaîne : ");
    scanf("%s", str);

    printf("Entrez un caractère à chercher : ");
    scanf(" %c", &c); 

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            count++;
        }
    }

    printf("Le caractère '%c' apparaît %d fois.\n", c, count);

    return 0;
}


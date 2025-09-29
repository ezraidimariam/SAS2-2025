#include <stdio.h>
#include <string.h>

int main() {
    char str[100], sub[50];

    printf("Entrez la chaîne principale : ");
    scanf("%[^\n]", str);

    getchar();

    printf("Entrez la sous-chaîne : ");
    scanf("%[^\n]", sub);

    if (strstr(str, sub) != NULL) {
        printf("La sous-chaîne '%s' est trouvée.\n", sub);
    } else {
        printf("La sous-chaîne '%s' n'est pas trouvée.\n", sub);
    }

    return 0;
}


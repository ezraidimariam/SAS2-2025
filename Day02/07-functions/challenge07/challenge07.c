#include <stdio.h>
#include <string.h>


void inverser(char str[]) {
    int i = 0;
    int j = strlen(str) - 1;
    char temp;

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char str[100];

    printf("Entrez une chaîne : ");
    scanf("%s", str); 

    inverser(str);

    printf("Chaîne inversée : %s\n", str);

    return 0;
}


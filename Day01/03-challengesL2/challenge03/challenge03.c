#include <stdio.h>

int main() {
    int jour_accordes;
    int jours_utilises;
    int status;
    int jours_rest;

    printf("Entrez le nombre total de jours de conges accordes: ");
    scanf("%d", &jour_accordes);

    printf("Entrez le nombre total de jours de conges utilises: ");
    scanf("%d", &jours_utilises);

    printf("Entrez le status (1 = temps plein, 0 = temps partiel): ");
    scanf("%d", &status);

    switch (status) {
        case 0:  
            jours_rest = (jour_accordes / 2) - jours_utilises;
            printf("Jours restants: %d\n", jours_rest);
            break;
        case 1:
            jours_rest = jour_accordes - jours_utilises;
            printf("Jours restants: %d\n", jours_rest);
            break;
        default:
            printf("⚠ Alerte: Type de status invalide.\n");
    }

    if (jours_utilises > jour_accordes) {
        printf("⚠ Alerte: Vous avez depasse le nombre de jours accordes!\n");
    }

    return 0;
}


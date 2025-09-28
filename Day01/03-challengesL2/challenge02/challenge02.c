#include <stdio.h>

int main() {
    int age, type, accidents;
    double primeBase, primeFinale;

    printf("Entrez la prime de base: ");
    scanf("%lf", &primeBase);

    printf("Entrez l'age du conducteur: ");
    scanf("%d", &age);

    printf("Type de voiture (1=Sportive, 2=Utilitaire, 3=Familiale): ");
    scanf("%d", &type);

    printf("Nombre d'accidents au cours des 5 dernieres annees: ");
    scanf("%d", &accidents);

    
    if (age < 25) {
        primeFinale = primeBase * 1.5;
    } else if (age <= 65) {
        primeFinale = primeBase;
    } else {
        primeFinale = primeBase * 1.2;
    }

    switch (type) {
        case 1:
            primeFinale *= 2;
            break;
        case 2:
            primeFinale *= 1.2;
            break;
        case 3:
            primeFinale *= 1.1;
            break;
        default:
            printf("Type de voiture invalide.\n");
            return 1;
    }

    if (accidents > 1) {
        primeFinale *= 1.3;
    }

    printf("La prime d'assurance finale est: %.2lf euros\n", primeFinale);

    return 0;
}

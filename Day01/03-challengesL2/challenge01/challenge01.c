nclude <stdio.h>

int main() {
    float revenu;
    int score;
    int duree;

    printf("Entrez le revenu annuel (en euros): ");
    scanf("%f", &revenu);

    printf("Entrez le score de credit (0-1000): ");
    scanf("%d", &score);

    printf("Entrez la duree du pret (en annees): ");
    scanf("%d", &duree);

    if (revenu >= 30000 && score >= 700 && duree <= 10) {
        printf("Eligibilite: Éligible\n");
    }
    else if (revenu >= 30000 && score >= 650 && duree <= 15) {
        printf("Eligibilite: Éligible avec conditions\n");
    }
    else {
        printf("Eligibilite: Non éligible\n");
    }
}


#include <stdio.h>

int main() {
    int score, anciennete, recompenses;
    double bonus = 0;

    printf("Entrez le score: ");
    scanf("%d", &score);

    printf("Entrez l'anciennete (en annees): ");
    scanf("%d", &anciennete);

    printf("Entrez le nombre de recompenses: ");
    scanf("%d", &recompenses);

    
    if (score >= 90 && anciennete >= 5) {
        printf("Evaluation: Excellente\n");
    }
    else if (score >= 75 && anciennete >= 3) {
        printf("Evaluation: Bonne\n");
    }
    else if (score >= 50 && anciennete < 3) {
        printf("Evaluation: Satisfaisante\n");
    }
    else if (score < 50) {
        printf("Evaluation: Insuffisante\n");
    }

    
    if (recompenses == 1) {
        bonus = 0.10;  
    }
    else if (recompenses >= 2) {
        bonus = 0.20;  
    }

    if (bonus > 0) {
        printf("Bonus a ajouter: %.0f%%\n", bonus * 100);
    }

    return 0;
}


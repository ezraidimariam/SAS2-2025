#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[50];
    char prenom[50];
    int notes[5]; 
};

int main() {
    struct Etudiant e;

    strcpy(e.nom, "Zraydi");
    strcpy(e.prenom, "Maryam");
    e.notes[0] = 15;
    e.notes[1] = 18;
    e.notes[2] = 12;
    e.notes[3] = 14;
    e.notes[4] = 16;

    printf("Nom : %s\n", e.nom);
    printf("Prénom : %s\n", e.prenom);
    printf("Notes : ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", e.notes[i]);
    }
    printf("\n");

    return 0;
}


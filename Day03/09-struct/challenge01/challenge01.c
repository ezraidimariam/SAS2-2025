#include <stdio.h>
#include <string.h>


struct Personne {
    char nom[50];
    char prenom[50];
    int age;
};

int main() {
    struct Personne p;

    strcpy(p.nom, "Zraydi");
    strcpy(p.prenom, "Maryam");
    p.age = 22;

 
    printf("Nom : %s\n", p.nom);
    printf("Prénom : %s\n", p.prenom);
    printf("Âge : %d\n", p.age);

    return 0;
}


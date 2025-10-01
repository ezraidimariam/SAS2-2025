#include <stdio.h>
#include <string.h>

#define MAX 200

// Définition de la structure animal
struct animal {
    int id_unique;
    char nom[50];
    char espece[50];
    int age;
    char habitat[50];
    float poids;
};

int main() {
    // Les 20 animaux de départ
    struct animal animaux[MAX] = {
        {1, "Simba", "Lion", 5, "Savane", 190.5},
        {2, "Nala", "Lion", 4, "Savane", 175},
        {3, "Sherekhan", "Tigre", 8, "Jungle", 220.3},
        {4, "Baloo", "Ours", 12, "Foret", 310},
        {5, "Raja", "Elephant", 15, "Savane", 540.7},
        {6, "Marty", "Zebre", 6, "Savane", 300.2},
        {7, "Gloria", "Hippopotame", 10, "Riviere", 450},
        {8, "Alex", "Lion", 7, "Savane", 200},
        {9, "Julien", "Lemurien", 3, "Jungle", 12.5},
        {10, "Melman", "Girafe", 9, "Savane", 390.8},
        {11, "Timon", "Suricate", 2, "Desert", 1.2},
        {12, "Pumbaa", "Phacocher", 5, "Savane", 120},
        {13, "Scar", "Lion", 11, "Savane", 210.4},
        {14, "Kaa", "Serpent", 6, "Jungle", 45},
        {15, "Iko", "Perroquet", 4, "Jungle", 2.1},
        {16, "Dumbo", "Elephant", 3, "Savane", 320},
        {17, "Kim", "Chien_sauvage", 7, "Savane", 25},
        {18, "Donatello", "Tortue", 40, "Riviere", 90.5},
        {19, "Polly", "Oiseau", 5, "Jungle", 1.5},
        {20, "Kong", "Gorille", 13, "Jungle", 180}
    };

    int count = 20; // nombre actuel d'animaux
    int choix;

    while(1) {
        printf("\n===== MENU PRINCIPAL =====\n");
        printf("1. Ajouter un animal       =\n");
        printf("2. Afficher les animaux    =\n");
        printf("3. Modifier un animal      =\n");
        printf("4. Supprimer un animal     =\n");
        printf("5. Rechercher un animal    =\n");
        printf("6. Statistiques            =\n");
        printf("0. Quitter                 =\n");
        printf("============================\n");

        printf("Votre choix: ");
        scanf("%d", &choix);

        switch(choix) {
            case 1: { //// Ajouter un animal
                int nbr;
                printf("Combien d'animaux voulez-vous ajouter ?\n");
                scanf("%d", &nbr);

                int nextId = count + 1;
                for(int i = 0; i < nbr; i++) {
                    if(count >= MAX) {
                        printf("Le zoo est plein !\n");
                        break;
                    }

                    animaux[count].id_unique = nextId++;

                    printf("Nom: ");
                    scanf("%s", animaux[count].nom);
                    printf("Espece: ");
                    scanf("%s", animaux[count].espece);
                    printf("Age: ");
                    scanf("%d", &animaux[count].age);
                    printf("Habitat: ");
                    scanf("%s", animaux[count].habitat);
                    printf("Poids: ");
                    scanf("%f", &animaux[count].poids);

                    count++;
                    printf("====== Animal Ajoute ! ========\n");
                }
                break;
            }

            case 2: { //// Afficher les animaux
                int option;
                printf("\n=== AFFICHAGE DES ANIMAUX ===\n");
                printf("1. Afficher tous les animaux\n");
                printf("2. Trier par nom\n");
                printf("3. Trier par age\n");
                printf("4. Afficher par habitat\n");

                printf("Entrez une option: ");
                scanf("%d", &option);

                if(option == 1) { //// Tous
                    for(int i = 0; i < count; i++) {
                        printf("ID:%d | Nom:%s | Espece:%s | Age:%d | Habitat:%s | Poids:%.2f\n",
                            animaux[i].id_unique, animaux[i].nom, animaux[i].espece,
                            animaux[i].age, animaux[i].habitat, animaux[i].poids);
                    }
                }
                else if(option == 2) { //// Tri par nom
                    for(int i = 0; i < count-1; i++) {
                        for(int j = i+1; j < count; j++) {
                            if(strcmp(animaux[i].nom, animaux[j].nom) > 0) {
                                struct animal temp = animaux[i];
                                animaux[i] = animaux[j];
                                animaux[j] = temp;
                            }
                        }
                    }
                    printf("\n--- Liste triee par nom ---\n");
                    for(int i = 0; i < count; i++) {
                        printf("ID:%d | Nom:%s | Espece:%s | Age:%d | Habitat:%s | Poids:%.2f\n",
                            animaux[i].id_unique, animaux[i].nom, animaux[i].espece,
                            animaux[i].age, animaux[i].habitat, animaux[i].poids);
                    }
                }
                else if(option == 3) { //// Tri par age
                    for(int i = 0; i < count-1; i++) {
                        for(int j = i+1; j < count; j++) {
                            if(animaux[i].age > animaux[j].age) {
                                struct animal temp = animaux[i];
                                animaux[i] = animaux[j];
                                animaux[j] = temp;
                            }
                        }
                    }
                    printf("\n--- Liste triee par age ---\n");
                    for(int i = 0; i < count; i++) {
                        printf("ID:%d | Nom:%s | Espece:%s | Age:%d | Habitat:%s | Poids:%.2f\n",
                            animaux[i].id_unique, animaux[i].nom, animaux[i].espece,
                            animaux[i].age, animaux[i].habitat, animaux[i].poids);
                    }
                }
                else if(option == 4) { //// Affichage par habitat
                    char hab[50];
                    printf("Donner l'habitat a afficher: ");
                    scanf("%s", hab);

                    printf("\n--- Animaux dans l'habitat %s ---\n", hab);
                    for(int i = 0; i < count; i++) {
                        if(strcmp(animaux[i].habitat, hab) == 0) {
                            printf("ID:%d | Nom:%s | Espece:%s | Age:%d | Habitat:%s | Poids:%.2f\n",
                                animaux[i].id_unique, animaux[i].nom, animaux[i].espece,
                                animaux[i].age, animaux[i].habitat, animaux[i].poids);
                        }
                    }
                }
                else {
                    printf("Choix invalide !\n");
                }
                break;
            }

            case 3: { //// Modifier un animal
                int id;
                printf("Entrer l'ID de l'animal a modifier: ");
                scanf("%d", &id);

                int found = 0;
                for(int i = 0; i < count; i++) {
                    if(animaux[i].id_unique == id) {
                        found = 1;
                        printf("Nouveau nom: ");
                        scanf("%s", animaux[i].nom);
                        printf("Nouvelle espece: ");
                        scanf("%s", animaux[i].espece);
                        printf("Nouvel age: ");
                        scanf("%d", &animaux[i].age);
                        printf("Nouvel habitat: ");
                        scanf("%s", animaux[i].habitat);
                        printf("Nouveau poids: ");
                        scanf("%f", &animaux[i].poids);
                        printf("====== Animal modifie ! =======\n");
                        break;
                    }
                }
                if(!found) {
                    printf("Animal non trouve !\n");
                }
                break;
            }

            case 4: { //// Supprimer un animal par ID
                int id;
                printf("Entrer l'ID de l'animal a supprimer: ");
                scanf("%d", &id);

                int found = 0;
                for(int i = 0; i < count; i++) {
                    if(animaux[i].id_unique == id) {
                        found = 1;
                        for(int j = i; j < count-1; j++) {
                            animaux[j] = animaux[j+1];
                        }
                        count--;
                        printf("====== Animal supprime ! ======\n");
                        break;
                    }
                }
                if(!found) {
                    printf("Animal non trouve !\n");
                }
                break;
            }

            case 5: { //// Rechercher un animal
                int option;
                printf("\n=== RECHERCHE ===\n");
                printf("1. Par ID\n");
                printf("2. Par Nom\n");
                printf("3. Par Espece\n");
                printf("Votre choix: ");
                scanf("%d", &option);

                if(option == 1) {
                    int id;
                    printf("Entrer l'ID: ");
                    scanf("%d", &id);
                    for(int i = 0; i < count; i++) {
                        if(animaux[i].id_unique == id) {
                            printf("ID:%d | Nom:%s | Espece:%s | Age:%d | Habitat:%s | Poids:%.2f\n",
                                animaux[i].id_unique, animaux[i].nom, animaux[i].espece,
                                animaux[i].age, animaux[i].habitat, animaux[i].poids);
                        }
                    }
                }
                else if(option == 2) {
                    char nom[50];
                    printf("Entrer le nom: ");
                    scanf("%s", nom);
                    for(int i = 0; i < count; i++) {
                        if(strcmp(animaux[i].nom, nom) == 0) {
                            printf("ID:%d | Nom:%s | Espece:%s | Age:%d | Habitat:%s | Poids:%.2f\n",
                                animaux[i].id_unique, animaux[i].nom, animaux[i].espece,
                                animaux[i].age, animaux[i].habitat, animaux[i].poids);
                        }
                    }
                }
                else if(option == 3) {
                    char espece[50];
                    printf("Entrer l'espece: ");
                    scanf("%s", espece);
                    for(int i = 0; i < count; i++) {
                        if(strcmp(animaux[i].espece, espece) == 0) {
                            printf("ID:%d | Nom:%s | Espece:%s | Age:%d | Habitat:%s | Poids:%.2f\n",
                                animaux[i].id_unique, animaux[i].nom, animaux[i].espece,
                                animaux[i].age, animaux[i].habitat, animaux[i].poids);
                        }
                    }
                }
                else {
                    printf("Choix invalide !\n");
                }
                break;
            }

            case 6: { //// Statistiques
                printf("\n--- Statistiques du Zoo ---\n");

                if(count == 0) {
                    printf("Aucun animal dans le zoo !\n");
                    break;
                }

                int sommeAges = 0;
                float sommePoids = 0;
                int minIndex = 0, maxIndex = 0;

                for(int i = 0; i < count; i++) {
                    sommeAges += animaux[i].age;
                    sommePoids += animaux[i].poids;

                    if(animaux[i].poids < animaux[minIndex].poids) {
                        minIndex = i;
                    }
                    if(animaux[i].poids > animaux[maxIndex].poids) {
                        maxIndex = i;
                    }
                }

                float moyenneAge = (float)sommeAges / count;
                float moyennePoids = sommePoids / count;

                printf("Nombre total d'animaux : %d\n", count);
                printf("Age moyen : %.2f ans\n", moyenneAge);
                printf("Poids moyen : %.2f kg\n", moyennePoids);

                printf("\n--- Animal le plus leger ---\n");
                printf("ID:%d | Nom:%s | Espece:%s | Age:%d | Habitat:%s | Poids:%.2f\n",
                    animaux[minIndex].id_unique, animaux[minIndex].nom, animaux[minIndex].espece,
                    animaux[minIndex].age, animaux[minIndex].habitat, animaux[minIndex].poids);

                printf("\n--- Animal le plus lourd ---\n");
                printf("ID:%d | Nom:%s | Espece:%s | Age:%d | Habitat:%s | Poids:%.2f\n",
                    animaux[maxIndex].id_unique, animaux[maxIndex].nom, animaux[maxIndex].espece,
                    animaux[maxIndex].age, animaux[maxIndex].habitat, animaux[maxIndex].poids);
                break;
            }

            case 0:
                printf("Au revoir !\n");
		return 0;

            default:
                printf("Choix invalide !\n");
        }
    }}

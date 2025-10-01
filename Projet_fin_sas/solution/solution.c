#include <stdio.h>
#include <string.h>

#define MAX 200

struct animal {
    int id_unique;
    char nom[50];
    char espece[50];
    int age;
    char habitat[50];
    float poids;
};

int main() {
    struct animal animaux[MAX];
    int count = 0;
    int nextId = 1;
    int choix, nb;

    while(1) {
        printf("\n===== MENU PRINCIPAL =====\n");
        printf("1. Ajouter un animal\n");
        printf("2. Afficher les animaux\n");
        printf("3. Modifier un animal\n");
        printf("4. Supprimer un animal\n");
        printf("5. Rechercher un animal\n");
        printf("6. Statistiques\n");
        printf("0. Quitter\n");
        printf("===============================\n");
        printf("Votre choix: ");
        scanf("%d", &choix);

        switch(choix) {
            case 1: ///////ajouter un animal//////
		 printf("Combien d'animaux voulez-vous ajouter ? ");
		 scanf("%d", &nb);

	    	for(int k = 0; k < nb; k++)
	    	{
    			if(count >= MAX)
	        	{
       				 printf("Zoo plein !\n");
        			break;
    			}

			animaux[count].id_unique = nextId++;
    			printf("Nom: "); scanf("%s", animaux[count].nom);
    			printf("Espèce: "); scanf("%s", animaux[count].espece);
    			printf("Age: "); scanf("%d", &animaux[count].age);
    			printf("Habitat: "); scanf("%s", animaux[count].habitat);
    			printf("Poids: "); scanf("%f", &animaux[count].poids);
		
    			count++;
    			printf("======Animal ajoute======== !\n");
		}

 

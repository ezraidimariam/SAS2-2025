/////MON PROJET FIN_SAS_2025

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
    // les 20 animaux
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

    int count = 20;
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
                int nbr; // nbr des animaux

                printf("Combien d'animaux voulez-vous ajouter ?\n");
                scanf("%d", &nbr);

                int nextId = count + 1; // ID pour le prochain animal

                for(int i = 0; i < nbr; i++) 
		{
                    if(count >= MAX)
		    {
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
                    printf("====== Animal Ajoutée ! ========\n");
                }
                break;
            }
	    case 2 : ////Afficher les Animaux
	    {
		int	option;
		
		 printf("\n=== AFFICHAGE DES ANIMAUX ===\n");
    		 printf("1. Afficher tous les animaux\n");
    		 printf("2. Trier par nom\n");
    		 printf("3. Trier par age\n");
    		 printf("4. Afficher par habitat\n");

		 printf("entrez un option");
		 scanf("%d", &option);
		if (option == 1)
		{
			printf("les animaux sont : \n");
			for(i = 0; i < count; i++)
			{
				printf("ID:%d, Nom : %s, Espece : %s, Age : %d, Habitat : %s, Poids : %.2f", animaux[i].id_unique, animaux[i].nom, animaux[i].espece, animaux[i].age, animaux[i].habitat, animaux[i].poids);
			}
		}
		else if(option == 2)
		{
			for(int i = 0; i < count-1; i++)
			{
            			for(int j = i+1; j < count; j++) 
				{
                				if(strcmp(animaux[i].nom, animaux[j].nom) > 0)
						{
                    					struct animal temp = animaux[i];
                    					animaux[i] = animaux[j];
                   					animaux[j] = temp;
                				}
            			}
        		}
        		printf("\n====== Liste triee par nom =====\n");
        		for(int i = 0; i < count; i++) 
			{
            			printf("ID: %d | Nom: %s | Espece: %s | Age: %d | Habitat: %s | Poids: %.2f\n",
                   			animaux[i].id_unique, animaux[i].nom, animaux[i].espece,
                			animaux[i].age, animaux[i].habitat, animaux[i].poids);
        		}
    		}
		else if(choixAff == 3)
		{
        		for(int i = 0; i < count-1; i++)
			{
            			for(int j = i+1; j < count; j++)
				{
                			if(animaux[i].age > animaux[j].age)
					{
                    				struct animal temp = animaux[i];
                    				animaux[i] = animaux[j];
                				animaux[j] = temp;
                			}
            			}
        		}
        		printf("\n--- Liste triee par age ---\n");
        		for(int i = 0; i < count; i++) {
            		printf("ID: %d | Nom: %s | Espece: %s | Age: %d | Habitat: %s | Poids: %.2f\n",
                   	animaux[i].id_unique, animaux[i].nom, animaux[i].espece,
                   	animaux[i].age, animaux[i].habitat, animaux[i].poids);
        		}
    		}

    	else if(choixAff == 4)
	{
        	char hab[50];
        	printf("Donner l'habitat a afficher: ");
        	scanf("%s", hab);

        	printf("\n--- Animaux dans l'habitat %s ---\n", hab);
        	for(int i = 0; i < count; i++) {
            	if(strcmp(animaux[i].habitat, hab) == 0) {
                printf("ID: %d | Nom: %s | Espece: %s | Age: %d | Habitat: %s | Poids: %.2f\n",
                       animaux[i].id_unique, animaux[i].nom, animaux[i].espece,
                       animaux[i].age, animaux[i].habitat, animaux[i].poids);
            						}
        				}
    	}

    	else
	{
        	printf("Choix invalide !\n");
    	}
    break;
}
				
				
			

		
		


















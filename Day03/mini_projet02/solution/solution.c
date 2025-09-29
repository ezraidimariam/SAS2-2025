#include <stdio.h>
#include <string.h>

#define MAX 100

struct Contact {
    char nom[50];
    char telephone[20];
    char email[50];
};

int main() {
    struct Contact contacts[MAX];
    int n = 0;
    int option;
    char search[50];
    int i;

    while(1) {
        printf("\n1. Ajouter un contact\n");
        printf("2. Afficher tous les contacts\n");
        printf("3. Rechercher un contact\n");
        printf("4. Modifier un contact\n");
        printf("5. Supprimer un contact\n");
        printf("0. Quitter\n");
        printf("Option: ");
        scanf("%d", &option);

        if(option == 0) break;

        switch(option) {
            case 1:
                printf("Nom: "); scanf("%s", contacts[n].nom);
                printf("Téléphone: "); scanf("%s", contacts[n].telephone);
                printf("Email: "); scanf("%s", contacts[n].email);
                n++;
                break;

            case 2:
                for(i=0;i<n;i++)
                    printf("%d. %s | %s | %s\n", i+1, contacts[i].nom, contacts[i].telephone, contacts[i].email);
                break;

            case 3:
                printf("Nom à rechercher: "); scanf("%s", search);
                for(i=0;i<n;i++)
                    if(strcmp(contacts[i].nom, search) == 0)
                        printf("Trouvé: %s | %s | %s\n", contacts[i].nom, contacts[i].telephone, contacts[i].email);
                break;

            case 4:
                printf("Nom à modifier: "); scanf("%s", search);
                for(i=0;i<n;i++)
                    if(strcmp(contacts[i].nom, search) == 0) {
                        printf("Nouveau téléphone: "); scanf("%s", contacts[i].telephone);
                        printf("Nouvel email: "); scanf("%s", contacts[i].email);
                        printf("Contact modifié!\n");
                    }
                break;

            case 5:
                printf("Nom à supprimer: "); scanf("%s", search);
                for(i=0;i<n;i++)
                    if(strcmp(contacts[i].nom, search) == 0) {
                        int j;
                        for(j=i;j<n-1;j++)
                            contacts[j] = contacts[j+1];
                        n--;
                        printf("Contact supprimé!\n");
                        break;
                    }
                break;

            default:
                printf("Option invalide!\n");
        }
    }

    return 0;
}


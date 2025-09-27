#include <stdio.h>

int main()
{
	char nom[50];
	char prenom[50];
	int  age;
	char adress[50];
	char sexe;

	printf("\n=======entrez votre infos personnels====: \n\n");
	printf("entrez votre nom: ");
	scanf("%s", nom);
	printf("entrez votre prenom: ");
	scanf("%s", prenom);
	printf("entrez votre age: ");
	scanf("%d", &age);
	printf("entrez votre adress email: ");
	scanf("%s", adress);
	printf("entrez votre sexe(F/M): ");
	scanf(" %c", &sexe); 

	printf("\nvotre nom complet est: %s %s, et votre age est: %d, et votre adress est: %s, et votre sexe est : %c\n",
											               nom, prenom, age, adress, sexe);
}


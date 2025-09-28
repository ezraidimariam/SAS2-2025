#include <stdio.h>

int main() 
{
	    int annee, choix;
	    int mois, jours;
	    long heures, minutes, secondes;

	     printf("Entrez le nombre d'annees: ");
	     scanf("%d", &annee);

	     printf("\n--- Menu de Conversion ---\n");
	     printf("1. Convertir en mois\n");
	     printf("2. Convertir en jours\n");
	     printf("3. Convertir en heures\n");
	     printf("4. Convertir en minutes\n");
	     printf("5. Convertir en secondes\n");
	     printf("Votre choix: ");
	     scanf("%d", &choix);

	switch (choix)
       	{
	case 1:
		mois = annee * 12;										   printf("%d annee(s) = %d mois\n", annee, mois);						       break;
													   case 2:
		jours = annee * 365;										    printf("%d annee(s) = %d jours\n", annee, jours);
		 break;
											
													   case 3:
	heures = annee * 365L * 24;									   printf("%d annee(s) = %ld heures\n", annee, heures);							break;
																								            case 4:
	 minutes = annee * 365L * 24 * 60;								      printf("%d annee(s) = %ld minutes\n", annee, minutes);
	break;												case 5:
													secondes = annee * 365L * 24 * 60 * 60;
     printf("%d annee(s) = %ld secondes\n", annee, secondes);					
     break;																							            default:
													printf("Choix invalide.\n");
													}
}

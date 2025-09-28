#include <stdio.h>

int main()
{
	     float   km_h;
	     float   m_s;

	     printf("la vitesse en kilomètres par heure (km/h): ");
	     scanf("%f", &km_h);

		m_s = km_h * 0.27778;
		printf(" la distance en mètres par seconde (m/s)est: %.2f", m_s);
}

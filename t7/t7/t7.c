#include <stdio.h>
#include <string.h>
//t7.c | Hannu Kreivi, TYO14SOHJ
//Funktio strchr etsii parametrin merkki ensimmäistä esiintymää parametrin jono osoittamasta merkkitaulukosta. strchr on määritelty kirjastossa string.h. Funktio palauttaa arvon NULL, jos etsittyä merkkiä ei löydy mainitusta jonosta, 
//muuten se palauttaa etsityn merkkijonon alkion osoitteen.

#include <stdio.h>
#include <string.h>

int main(void)
{
	char merkki;
	char merkkitaulu[] = "taateli";
	char *p;

	printf("anna kirjain: ");
	scanf("%c", &merkki);

	p = strchr(merkkitaulu, merkki);

	if(p == 0) {

		printf("Merkkia %i ei loytynyt", p);
	}
	else {

	printf("p:n arvo: %i\n", p);
	}
}

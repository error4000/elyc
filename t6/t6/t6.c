#include <stdio.h>
#include <string.h>
//t6.c | Hannu Kreivi, TYO14SOHJ
//Funktio strchr etsii parametrin merkki ensimm�ist� esiintym�� parametrin jono osoittamasta merkkitaulukosta. strchr on m��ritelty kirjastossa string.h. Funktio palauttaa arvon NULL, jos etsitty� merkki� ei l�ydy mainitusta jonosta, 
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

	printf("p:n arvo: %i\n", p);
}

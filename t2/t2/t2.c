#include<stdio.h>
//t2.c |Hannu Kreivi, TYO14SOHJ
//Kirjoita ohjelma nimelta kopioi, joka toimii seuraavasti:
//ohjelma suoritetaan komennolla kopioi ekatiedosto tokatiedosto
//talloin ekatiedosto kopioituu tokatiedostoon.
//jos ekatiedostoa ei loydy, tulostuu virheilmoitus.

int main ( int argc, char *argv[] )

{
	FILE *tiedostoeka;
	FILE *tiedostotoka;
	char rivi[100];




	//tiedostoeka=fopen("ekatiedosto.txt","r"),argv[1];
	tiedostoeka = fopen(argv[1],"r");

	//tarkistetaan loytyyko ekatiedostoa
	if (tiedostoeka==NULL) {
	printf("File 'tiedostoeka' not found!");
	}
	//Jos loytyy, jatketaan eteenpain
	else {

	//tiedostotoka=fopen("tokatiedosto.txt","w"),argv[2];
	tiedostotoka=fopen(argv[2],"w");
	

	while(!feof(tiedostoeka)) {
	fgets(rivi, 100, tiedostoeka);

	fputs(rivi,tiedostotoka);
	fclose(tiedostoeka);
	fclose(tiedostotoka);
	}
}

}	






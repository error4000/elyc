#include<stdio.h>
//t2.c |Hannu Kreivi, TYO14SOHJ
//Kirjoita ohjelma nimelta kopioi, joka toimii seuraavasti:
//ohjelma suoritetaan komennolla kopioi ekatiedosto tokatiedosto
//talloin ekatiedosto kopioituu tokatiedostoon.
//jos ekatiedostoa ei loydy, tulostuu virheilmoitus

int main ( int argc, char *argv[] )

{
	FILE *tiedostoeka;
	FILE *tiedostotoka;


	tiedostoeka=fopen("ekatiedosto.txt","r"),argv[1];

	//tarkistetaan loytyyko ekatiedostoa
	if (tiedostoeka==NULL) {
	printf("File [ekatiedosto.txt] not found!");
	}
	//Jos loytyy, jatketaan eteenpain
	else {

	tiedostotoka=fopen("tokatiedosto.txt","w"),argv[2];
	}


	}




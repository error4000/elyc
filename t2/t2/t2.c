#include<stdio.h>
//t2.c |Hannu Kreivi, TYO14SOHJ
//Kirjoita ohjelma nimeltä kopioi, joka toimii seuraavasti:
//ohjelma suoritetaan komennolla kopioi ekatiedosto tokatiedosto
//tällöin ekatiedosto kopioituu tokatiedostoon.
//jos ekatiedostoa ei löydy, tulostuu virheilmoitus

int main ( int argc, char *argv[] )

{
	FILE *tiedostoeka;
	FILE *tiedostotoka;


	tiedostoeka=fopen("C:/temp/ekatiedosto.txt","r"),argv[1];

	//tarkistetaan löytyykö ekatiedostoa
	if (tiedostoeka==NULL) {
	printf("File [ekatiedosto.txt] not found!");
	}
	//Jos löytyy, jatketaan eteenpäin
	else {
	
	tiedostotoka=fopen("C:/temp/tokatiedosto.txt","w"),argv[2]; 
	}


	}
	



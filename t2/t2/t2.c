#include<stdio.h>
//t2.c |Hannu Kreivi, TYO14SOHJ
//Kirjoita ohjelma nimelt� kopioi, joka toimii seuraavasti:
//ohjelma suoritetaan komennolla kopioi ekatiedosto tokatiedosto
//t�ll�in ekatiedosto kopioituu tokatiedostoon.
//jos ekatiedostoa ei l�ydy, tulostuu virheilmoitus

int main ( int argc, char *argv[] )

{
	FILE *tiedostoeka;
	FILE *tiedostotoka;

	char kopio[5];
	char ekatiedosto[15];
	char tokatiedosto[15];

	tiedostoeka=fopen("C:/temp/ekatiedosto.txt","r");

	//tarkistetaan l�ytyyk� ekatiedostoa
	if (tiedostoeka==NULL) {
	printf("File [ekatiedosto.txt] not found!");
	}
	//Jos l�ytyy, jatketaan eteenp�in
	else {
	
	tiedostotoka=fopen("C:/temp/tokatiedosto.txt","w"); 
	}

	

	
}


#include<stdio.h>
#include <string.h> //Merkkijono funkkarit
//t3.c | Hannu Kreivi, TYO14SOHJ
//Kirjoita ohjelma nimelt� laskemerkit, joka laskee annetusta tiedostosta merkkien m��r�n. 
//Tiedostonimi annetaan komentorivilt�. Merkeiksi lasketaan kaikki merkit my�s v�lily�nnit ja rivinvaihtomerkit. 

int main ( int argc, char *argv[] )

{
	FILE *tiedosto;
	char rivi[200];
	char str[100];
	int len;
	

	//Avataan tiedosto lukemista varten
	tiedosto = fopen(argv[1],"r"); 
	//tarkistetaan loytyyko tiedostoa
	if (tiedosto==NULL) {
	printf("File not found!\n");
	}
	//Jos loytyy, jatketaan eteenpain
	else {

	while(!feof(tiedosto)) {
	fgets(rivi, 200, tiedosto);

	strcpy(str, rivi);
	len = strlen(str);

	printf("Merkkien maara annetun tiedoston rivissa on %d\n", len);

   return(0);

	}

	}


}	
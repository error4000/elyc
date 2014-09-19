#include<stdio.h>
#include <ctype.h> //isalpha funktio

//t4.c | Hannu Kreivi, TYO14SOHJ
//Kirjoita ohjelma nimelt� laskesanat, joka laskee annetusta tiedostosta sanojen m��r�n. Tiedostonimi annetaan komentorivilt�. Sanoiksi lasketaan my�s yksitt�iset merkit ja numerot. 
//Eli aina kun l�ytyy v�lily�nti tai rivinvaihto, alkaa uusi sana. 


int main ( int argc, char *argv[] )

{

	FILE *tiedosto;
	int ch;
	int inword = 0;
	int w=0;

	tiedosto = fopen(argv[1],"r");
	 
	//Jos tiedostoa ei l�ydy, virhe
	if (tiedosto==NULL) {
	printf("File not found!\n");
	}

	//k�yd��n tiedosto l�pi kunnes NULL
	while ((ch=fgetc(tiedosto))!=EOF)
  {
    if (isspace(ch))
    {
		//Jos merkkej� enemm�n kuin 2, lasketaan lauseeksi      
		if (inword > 2)
      {
        w++;
      }
      inword = 0;
    }
    else if (isalpha(ch) || ispunct(ch)) {
      inword++;
	
    }
  }

  if (inword > 2) w++;

  printf("Tiedostossa on sanoja %d kpl\n", w);

  return 0;
}



#include<stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
//t4.c | Hannu Kreivi, TYO14SOHJ
//Kirjoita ohjelma nimeltä laskesanat, joka laskee annetusta tiedostosta sanojen määrän. Tiedostonimi annetaan komentoriviltä. Sanoiksi lasketaan myös yksittäiset merkit ja numerot. 
//Eli aina kun löytyy välilyönti tai rivinvaihto, alkaa uusi sana. 



int main ( int argc, char *argv[] )

{
	FILE *tiedosto;

	int ch;
	int inword = 0;
	int w=0, c=0, rivit=0;


	tiedosto = fopen(argv[1],"r");
	 
	//Jos tiedostoa ei löydy, virhe
	if (tiedosto==NULL) {
	printf("File not found!\n");
	return 0;
	}

	if(argv[2] == NULL) {
		printf("Et antanut parametria\n");
		exit (-1);
	}
	
	if (strcmp(argv[2],"-rivit")==0)
	{
		for (c = getc(tiedosto); c != EOF; c = getc(tiedosto))
        if (c == '\n')
            rivit = rivit + 1;
		printf("Tiedostossa on riveja %i kpl\n", rivit);
		fclose(tiedosto);
	}
	
	//Jos argumentti -rivit
	if (strcmp(argv[2],"-sanat")==0)
	{
	//käydään tiedosto läpi kunnes NULL
	while ((ch=fgetc(tiedosto))!=EOF)
  {
    if (isspace(ch))
    {
		//Jos merkkejä enemmän kuin 2, lasketaan sanaksi      
		if (inword > 2)
      {
        w++;
      }
      inword = 0;
    }
    else if (isalpha(ch) || ispunct(ch)) {
      inword++;
	
	  if (isalpha(ch))
      {
        c++;
      }
    }
  }

  if (inword > 2) w++;

  printf("Tiedostossa on sanoja %d kpl\n",w);

  return 0;
	}
}

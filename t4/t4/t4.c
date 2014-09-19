#include<stdio.h>
#include <ctype.h> //isalpha funktio

//t4.c | Hannu Kreivi, TYO14SOHJ
//Kirjoita ohjelma nimeltä laskesanat, joka laskee annetusta tiedostosta sanojen määrän. Tiedostonimi annetaan komentoriviltä. Sanoiksi lasketaan myös yksittäiset merkit ja numerot. 
//Eli aina kun löytyy välilyönti tai rivinvaihto, alkaa uusi sana. 


int main ( int argc, char *argv[] )

{

	FILE *tiedosto;
	int ch;
	int inword = 0;
	int w=0;

	tiedosto = fopen(argv[1],"r");
	 
	//Jos tiedostoa ei löydy, virhe
	if (tiedosto==NULL) {
	printf("File not found!\n");
	}

	//käydään tiedosto läpi kunnes NULL
	while ((ch=fgetc(tiedosto))!=EOF)
  {
    if (isspace(ch))
    {
		//Jos merkkejä enemmän kuin 2, lasketaan lauseeksi      
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



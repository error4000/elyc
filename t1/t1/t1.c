#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//t1.c | Hannu Kreivi, TYO14SOHJ
/*Kirjoita ohjelma, joka tulostaa sille komentoriviltä annetut argumentit käänteisessä järjestyksessä. 
Esim. jos ohjelman nimi on testi.exe ja se käynnistetään komennolla testi eka toka kolmas, niin tulostuu: 
kolmas toka eka*/ 



int main ( int argc, char *argv[] )
{
	int i;
	

        for ( i = (argc-1); i >= 1 ; i--)
        {
			
            printf ("%s\n",argv[i]);
			
		
        }

}
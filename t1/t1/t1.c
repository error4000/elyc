#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//t1.c | Hannu Kreivi, TYO14SOHJ
/*Kirjoita ohjelma, joka tulostaa sille komentorivilt� annetut argumentit k��nteisess� j�rjestyksess�. 
Esim. jos ohjelman nimi on testi.exe ja se k�ynnistet��n komennolla testi eka toka kolmas, niin tulostuu: 
kolmas toka eka*/ 



int main ( int argc, char *argv[] )
{
	int i;
	

        for ( i = (argc-1); i >= 1 ; i--)
        {
			
            printf ("%s\n",argv[i]);
			
		
        }

}
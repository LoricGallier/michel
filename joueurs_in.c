#include <string.h>
#include <stdio.h>
#include "joueurs_in.h"


void lire_les_joueurs( char *nom_fich, joueurs *ens){
FILE *f; char c ;char *nom ; char *nbbille ; char *token;  /* chut ca va bien ce passer */
const char s[2] = " ";
f = fopen( nom_fich,"r");
if (f == NULL){ printf("bah non didier");}
else{
 fscanf (f , "%c", &c);
 fscanf (f , "%c", &c);
 while (! feof ( f )) { 
     nom = strtok(&c, s);
     nbbille= strtok(&c,s);
     printf("%s , %s",nom, nbbille);
     int bille = (int) nbbille;
     ajouter_joueur(ens, nom, bille);
     fscanf (f , "%c", &c);
 }
 fclose ( f ); 

}
}

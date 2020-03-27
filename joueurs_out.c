#include <string.h>
#include <stdio.h>
#include "joueurs_out.h"





void ecrire_les_joueurs(joueurs *ens, char *nom_fich) {

 FILE *f;
 f = fopen (nom_fich , "w");
 if (f == NULL ) {
   printf("bah non didier"); // affichage erreur syst ème
   }
else{
 fprintf(f,"%d\n", ens->nb);
 for( int i=0; i <ens->nb; i ++) {
   fprintf (f, "%s %d\n", ens ->T[i].pseudo,ens ->T[i].nb_billes);
  }

 fclose (f);
}
}



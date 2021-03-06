#include <string.h>
#include <stdio.h>
#include "joueurs.h"

void init_joueurs(joueurs *ens) 
{
    (*ens).nb =0;
}

int ajouter_joueur(joueurs *ens, char *nom, int billes) {
   if (trouver_joueur(ens , nom)== -1 ) {
    joueur j;
    strcpy(j.pseudo, nom);
    j.nb_billes = billes;
    ens -> T[ens->nb++]=j; 
   }
   return ens ->nb;


}

int nombre_joueurs(joueurs *ens) {
  return ens ->nb;
}

char *nom_joueur(joueurs *ens, int i) {
  if (ens ->nb < i ){
    return NULL;
  }
  else {
    return ens ->T[i].pseudo;
  }
}

int billes_joueur(joueurs *ens, int i) {
  if (ens ->nb < i ){
    return 0;
  }
  else {
    return ens ->T[i].nb_billes;
}
}

int trouver_joueur(joueurs *ens, char *nom) {
  
  for( int i =0;i<(ens ->nb);i++){
    if ((strcmp(ens ->T[i].pseudo,nom))== 0) {
      return i;
    }
  }
    return -1;
}

void modifier_billes(joueurs *ens, int i, int cpt) {
}

void afficher_ensemble_joueurs(joueurs *ens) {
    int i ;
    for (i=0 ; i<ens->nb ; i++) 
      printf("%s %d\n", ens->T[i].pseudo, ens->T[i].nb_billes) ;
}

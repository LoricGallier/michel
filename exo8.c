
#include <stdio.h>




int de_pipe(){
    int entier = generer_entier(13);
    int resultat = entier + 1;
    if (resultat == 1) {
        return 1;
    }
    else if (resultat ==2 || resultat == 3 ){
        return 2;
    }
    else if (resultat ==4 || resultat == 5 ){
        return 3;
    }
    else if (resultat ==6 || resultat == 7 ){
        return 4;
    }
    else if (resultat ==8 || resultat == 9 ){
        return 5;
    }
    else
        return 6;
}


int inclut(int An, int A[] ,int Bn, int B[] ){
    int i=0;
    int a = 0;
    while(i<An){
        for(int j=0;j<Bn;j++){
            if (A[i]==B[j]){
                a = 1;}
        if (a ==1){
            i++;
            a = 0;
        }
        else{
           return 0; 
        }
            }
    }
    return 1;
}
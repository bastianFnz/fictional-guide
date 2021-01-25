/******************************************************************************

minuAMayuPuntero.c
by Sebastian Fernandez
Date:2021

*******************************************************************************/
#include <stdio.h>

#define DIM 64


int minu_a_mayu(char *c){
    int i;
    for(i=0;*c != 0;c++){
        *c+='A'-'a';
        
        i++;
    }
    
    return i;
}

int main() {
    char cadena[DIM];
    
    printf("Ingresa una cadena: ");
    scanf("%s",cadena);
    
    printf("La cadena en mayuscula es %s y su tamaÃ±o es %d",cadena,minu_a_mayu(cadena));

    return 0;
}


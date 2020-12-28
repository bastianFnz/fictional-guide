/******************************************************************************

copia_comparaString.c
by Sebastian Fernandez
Date:2020

*******************************************************************************/


#include <stdio.h>
#include <string.h>

#define DIM 32

int main() {
    char cadena1[DIM], cadena2[DIM];

    printf("Ingrese una frase: ");
    gets(cadena1);
    
    strcpy(cadena2,cadena1);
    printf("%s\n",cadena1);
    printf("%s\n",cadena2);
    printf(" %d",strcmp(cadena1,cadena2));
    
    
    return 0;
}

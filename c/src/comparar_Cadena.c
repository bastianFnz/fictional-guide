/******************************************************************************

comparar_Cadena.c
by Sebastian Fernandez
Date:2020

*******************************************************************************/

#include <stdio.h>
#include <string.h>

#define DIM 8

int main() {
    char cadena1[DIM];
    char cadena2[DIM];
    
    printf("Ingresa una frase: ");
    gets(cadena1);
    
    printf("Ingresa otra frase: ");    
    scanf("%s", cadena2);
    printf("Frase: %d ",strcmp(cadena1,cadena2));

    return 0;
}

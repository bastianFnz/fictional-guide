/******************************************************************************

cortarStrings.c
by Sebastian Fernandez
Date:2020

*******************************************************************************/
#include <stdio.h>
#include <string.h>

#define DIM 32

int main() {
    char palabra[DIM] ;
    int corte;
    printf("Introduce una palabra: \n");
    scanf("%s",palabra);
    
    printf("La longitud de la palabra es: %ld\n",strlen(palabra));
    printf("Introduce un numero inferiror: \n");
    scanf("%d",&corte);
    
    palabra[corte]= 0;
    printf("%s ",palabra);
 
    return 0;
}

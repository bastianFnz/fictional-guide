/******************************************************************************

longitudCadenaPuntero.c
by Sebastian Fernandez
Date:2021

*******************************************************************************/
#include <stdio.h>

#define DIM 64

int main() {
    char datos[DIM], *p;
    int i=0;

    
    printf("Ingresa una cadena: ");
    scanf("%s",datos);
    p=datos;
    do{
        if(*p == 0){
            break;
        }
    p++;
    i++;
    }while(i<DIM);
    
    printf("La longitud de la cadena es %d",i);
    return 0;
}


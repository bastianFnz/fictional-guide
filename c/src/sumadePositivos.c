/******************************************************************************

sumadePositivos.c
by Sebastian Fernandez
Date:2021

*******************************************************************************/
#include <stdio.h>

int main() {
    int i, pos = 0 , neg = 0, suma = 0;
    int container;
    
    for ( i = 0; i < 10; i++) {
        printf("Ingrese un numero: ");
        scanf("%d",&container);
        
        if(container < 0){
            neg++;
        }else if(container > 0){
            pos++;
            suma+=container;
        }else{
            break;
        }
    }
    
    printf("Se han leido un total de %d y %d son negativos \n",i,neg);
    printf("la suma de los %d numeros positivo es: %d",pos,suma);

    return 0;
}

/******************************************************************************

incrementoListaPuntero.c
by Sebastian Fernandez
Date:2021

*******************************************************************************/
#include <stdio.h>
#define DIM 3

void incremento(int *tabla, int valor, int incremento){
    
    for (int i = 0; i < valor; i++) {
        
        tabla[i]+=incremento;    
    }
    
}

int main()
{
    int contain[DIM] = {3,8,5};
    
    printf("El contenido de la tabla es: %d %d %d",contain[0],contain[1],contain[2]);
    incremento(contain,DIM,5);
    
    printf("El contenido nuevo contenido de la tabla es: %d %d %d",contain[0],contain[1],contain[2]);
    
    return 0;
}



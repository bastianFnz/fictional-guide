/******************************************************************************

matrizMemDinamica.c
by Sebastian Fernandez
Date:2021

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, columna, fila, dato;
    int **numeros;

    printf("Ingresa el numero de columnas de la matriz? ");
    scanf("%d", &columna);// columas 
    printf("Ingresa el numero de filas de la matriz ");
    scanf("%d", &fila);// filas 

    numeros = (int**) malloc(fila*sizeof(int*));
    if (numeros == NULL) {
        printf("La reserva de memoria ha fallado.");
        return 1;
    }

    for (i=0; i<fila; i++) {
        numeros[i] = (int*) malloc(columna*sizeof(int));
        
        if (numeros[i] == NULL) {
            for (j=0; j<i; j++){
                free(numeros[j]);}
            free(numeros);            
            printf("La reserva de memoria ha fallado.");
            return 1;
        }  
    }

    
    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < columna; j++) {
            printf("Ingrese un numero: ");
            scanf("%d",&numeros[i][j]);
        }
    }

    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < columna; j++) {
            printf("%d ",numeros[i][j]);
        }
        printf("\n");
    }

    for (i=0; i<fila; i++){
        free(numeros[i]);}
    free(numeros);

    return 0;
}


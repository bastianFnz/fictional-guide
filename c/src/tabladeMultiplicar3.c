/******************************************************************************

tabladeMultiplicar3.c 
by Sebastian Fernandez
Date:2021

*******************************************************************************/
#include <stdio.h>

#define DIMI 9


int main() {
    int i, j, multiplo;

    for (i=1; i<=DIMI; i++){
        printf("La tabla de multiplicar del %d al %d es: ",i,i);
        for (j=1; j<=i; j++){
            multiplo = i * j;
            printf("%d por %d es: %d \n", i, j, multiplo);
        }    
    }
    return 0;
}

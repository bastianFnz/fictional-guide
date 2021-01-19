/******************************************************************************

tabladeMultiplicar2.c                        
by Sebastian Fernandez
Date:2021

*******************************************************************************/
#include <stdio.h>

#define DIMI 9
#define DIMJ 10

int main() {
    int i, j , multiplo;

    for (i=1; i<=DIMI; i++)
        for (j=1; j<=DIMJ; j++){
            multiplo = i * j;
            printf("%d por %d es %d \n", i, j, multiplo);
        }
    return 0;
}

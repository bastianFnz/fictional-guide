/******************************************************************************

converirDecimalABinario.c
by Sebastian Fernandez
Date:2021

*******************************************************************************/
#include <stdio.h>
#define DIM 16

int main() {
    int digito, cociente= 0, resto =0, i, contenedor[DIM];
    
    printf("Ingrese un numero: ");
    scanf("%d",&digito);
    cociente = digito;
    resto = digito;
    
    while(resto >=1){
        cociente%=2;
        resto /=2;
        contenedor[i]=cociente;
        cociente = resto;
        i++;
    }
    contenedor[i]=resto;    
    
    printf("El numero en %d en binario es: ",digito);
    for (int j = i; j >= 0; j--) {
        printf("%d",contenedor[j]);
    }
    return 0;
}

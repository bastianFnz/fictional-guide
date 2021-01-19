/******************************************************************************

tabladeMultiplicar1.c
by Sebastian Fernandez
Date:2021

*******************************************************************************/
#include <stdio.h>

int main() {
    int i, multiplo;
    
    
    printf("Ingrese un numero entre 1 y 9: ");
    do{
        scanf("%d",&multiplo);
        if(multiplo >9 || multiplo <1 ){
            printf("Erroer, Numero Incorrecto.Intente de nuevo: ");
        }
        
    }while(multiplo >9 || multiplo <1 );
    
    for (i =0 ; i<=10;i++) {
        printf("%d ", i * multiplo);
        
    }
    return 0;
}

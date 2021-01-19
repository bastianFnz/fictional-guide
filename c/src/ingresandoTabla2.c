/******************************************************************************

ingresandoTabla2.c
by Sebastian Fernandez
Date:2021

*******************************************************************************/
#include <stdio.h>

#define DIM 10

int main(){
    int tabla[DIM];
    int i= 0;    
    int digitos;
    
    while(i < DIM){
        tabla[i] = (i+1) *7;
        i++;
    }
    
    
    do{
        printf("Cuantos numeros quiere ver, entre 1 y 10");
        scanf("%d",&digitos);    
    }while(digitos <1 || digitos >10);

    i=0;
    while(i<digitos){
        printf("%d ",tabla[i]);
        i++;
    }
    
    return 0;
}

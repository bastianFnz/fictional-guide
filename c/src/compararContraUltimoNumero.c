/******************************************************************************

compararContraUltimoNumero.c
by Sebastian Fernandez
Date:2021

*******************************************************************************/
#include <stdio.h>

#define DIM 12

int main(){
    int tabla[DIM];
    int i= 0;    
    int digitos,ultimoDato;
    
     do{
        printf("Cuantos numeros quiere ver, entre 2 y 11: ");
        scanf("%d",&digitos);    
    }while(digitos <1 || digitos >11);
    
    
    while(i < digitos){
        printf("Ingresa el numero %d de %d : ",(i+1),digitos);
        scanf("%d",&tabla[i]);
        
      i++;
    }
    
    i--;
    ultimoDato = tabla[i];
    printf("%d \n",ultimoDato);

    i=0;
    while(i<digitos){
        if(tabla[i] < ultimoDato){
            printf("el numero %d es menor que %d \n",tabla[i],ultimoDato);
        }
        i++;
    }
    
    return 0;
}

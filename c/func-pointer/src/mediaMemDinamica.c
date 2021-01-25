/******************************************************************************

mediaMemDinamica.c
by Sebastian Fernandez
Date:2021

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, num, *valor;
    float total;
    
    do{
        printf("Ingrese la cantidad de enteros: ");
        scanf("%d",&num);
        if(num < 0){
            printf("Error. No se ha podido reservar memoria.");
        }
    }while(num < 0);
    
    valor = (int*) malloc(num*sizeof(int));
    
    if(valor == NULL){
        printf("La reserva de memoria ha fallado");
	return 1;
    }
    
    for(i=0; i<num; i++){
        printf("Ingrese el valor numero %d: ",i+1);
        scanf("\n %d",&valor[i]);
        total+=valor[i];
    }
    
    free(valor);
    printf("La media de los numeros leidos es: %.2f",total/2);
    
    
    return 0;
    
}


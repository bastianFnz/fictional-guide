/******************************************************************************

numerosPrimosyGemelos.c
by Sebastian Fernandez
Date:2021

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int esPrimo(int num) {
    int i;
    for (i=2; i<=sqrt(num); i++) {
        if (num%i == 0) {
            return 0;
        }
    }
    return 1;
}

void esGemelo(int num){
    int may,men;
    may = num+2;
    men = num-2;
    if(esPrimo(men) && esPrimo(may)){
        printf(" y los numeros %d y %d son primos gemelos",may,men);
        
    }else if(esPrimo(men)){
        printf("y %d es primo gemelo",men);
        
    }else if( esPrimo(may)){
        printf("y %d es primo gemelo",may);   
    }
    return;
}

int main() {
    int num,i=0;

    printf("Introduce un nÃºmero entero: ");
    scanf("%d", &num);

    if (esPrimo(num)){
        
        printf("%d es primo ", num);
        esGemelo(num);
    }else{
        printf("%d no es primo. \n", num);
    }
    return 0;
}



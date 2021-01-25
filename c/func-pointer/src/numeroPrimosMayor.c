/******************************************************************************

numeroPrimosMayor.c
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

int primoMayor(int num){
    int i=num;
    while(i>0){
        if(esPrimo(i)){
            printf("p %d",i);
            return i;
        }
        i--;
    }
}

int main() {
    int num,ret;
    do{

    printf("Introduce un numero entero: ");
    scanf("%d", &num);
    }while(num < 1);
    
    
    printf("El numero mayor comprendido entre 2 y %d es: %d",num,primoMayor(num));
    
    return 0;
}



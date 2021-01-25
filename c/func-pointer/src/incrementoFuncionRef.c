/******************************************************************************

incrementoFuncionRef.c
by Sebastian Fernandez
Date:2021

*******************************************************************************/
#include <stdio.h>

void niParesniNones(int *x) {
    (*x)++;
}

int main() {
    int num1, num2, res;

    printf("Ingresa un numero entero: ");
    scanf("%d",&num1);
    
    printf("Ingrese otro Numero entero ");
    scanf("\n %d",&num2);
    
    if((num1%2 == 0 && num2%2 == 0)|| (num1%2 == 1 && num2%2 ==1)){
        niParesniNones(&num2);
    }
    
    printf("los numeros despuÃ©s de llamar la funcion: %d y %d", num1, num2);

    return 0;
}


/******************************************************************************

convertidorEuro-Dolar.c
by Sebastian Fernandez
Date:2020

*******************************************************************************/

#include <stdio.h>

int main() {
    double euros;
    double dolares;
   
    printf("Introdusca la cantidad de dolares: ");
    scanf("%lf",&dolares);
    
    euros = dolares * 0.859;

    printf("%lf dólares son %lf euros.\n", dolares, euros);
   
    return 0;
}

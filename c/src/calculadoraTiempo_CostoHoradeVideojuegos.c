/******************************************************************************

calculadoraTiempo_CostoHoradeVideojuegos.c
by Sebastian Fernandez
Date:2020

*******************************************************************************/
#include <stdio.h>

int main() {
    double precio1;
    double tiempo1;
    double precio2;
    double tiempo2;
    double precio3;
    double tiempo3;
    double precio4;
    double tiempo4;
    double precio5;
    double tiempo5;
    double total;
    
    printf("Introduzca el costo del juego: ");
    scanf("%lf", &precio1);
    printf("Introduzca la cantidad de horas dedicadas a este juego: ");
    scanf("%lf", &tiempo1);
    printf("Introduzca el costo del juego: ");
    scanf("%lf", &precio2);
    printf("Introduzca la cantidad de horas dedicadas a este juego: ");
    scanf("%lf", &tiempo2);
    printf("Introduzca el costo del juego: ");
    scanf("%lf", &precio3);
    printf("Introduzca la cantidad de horas dedicadas a este juego: ");
    scanf("%lf", &tiempo3);
    printf("Introduzca el costo del juego: ");
    scanf("%lf", &precio4);
    printf("Introduzca la cantidad de horas dedicadas a este juego: ");
    scanf("%lf", &tiempo4);
    printf("Introduzca el costo del juego: ");
    scanf("%lf", &precio5);
    printf("Introduzca la cantidad de horas dedicadas a este juego: ");
    scanf("%lf", &tiempo5);
    
    total = (precio1/tiempo1+precio2/tiempo2+precio3/tiempo3+precio4/tiempo4+precio5/tiempo5)/5;
    printf("Te ha constado %lf por hora \n", total);
   
    return 0;
}

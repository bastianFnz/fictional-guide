/******************************************************************************

calcularMediaPuntajeJuego.c
by Sebastian Fernandez
Date:2020

*******************************************************************************/
#include <stdio.h>
#define COLUMNAS 3
#define FILAS 5

int main(){
    float jugador[COLUMNAS][FILAS]={{1,2,3,4,5},{3.2,2.5,2,6,8},{3,1,5,7,7.5}};
    
    float player;
    
    player=(jugador[0][0]+jugador[0][1]+jugador[0][2]+jugador[0][3]+jugador[0][4])/5;
    printf("La media del jugaror1 es de: %.2f \n",player);
    player=(jugador[1][0]+jugador[1][1]+jugador[1][2]+jugador[1][3]+jugador[1][4])/5;
    printf("La media del jugaror2 es de: %.2f \n",player);
    player=(jugador[2][0]+jugador[2][1]+jugador[2][2]+jugador[2][3]+jugador[2][4])/5;
    printf("La media del jugaror3 es de: %.2f \n",player);
    return 0;
}

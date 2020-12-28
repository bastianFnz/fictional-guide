/******************************************************************************

ratio_KDA5.c
by Sebastian Fernandez
Date:2020

*******************************************************************************/
#include <stdio.h>

#define MAX_STR 64
#define MAX_INT 5
#define DIM_PARTIDAS 4
#define DIM_JUGADORES 3

typedef struct{
    char campeon[MAX_STR];
    float rank_kda[MAX_INT];
} Juego;

typedef struct {
    char nombre[MAX_STR];
    Juego juego[DIM_PARTIDAS];
} Invocador;

int main () {
    Invocador invocador[DIM_JUGADORES];
    float ratio,asistencias1,muertes1,asesinatos1;
    float asistencias2,muertes2,asesinatos2;
    //jugador1
    
    printf("Cual es tu nombre de invocador: \n");
    scanf("%s",invocador[0].nombre);
    
    printf("Con que campeon has jugado tu ultima partida: \n");
    scanf("%s",invocador[0].juego[0].campeon);
    
    printf("Cuantos asesinatos has hecho: \n");
    scanf("%f",&invocador[0].juego[0].rank_kda[0]);
    printf("Cuantas veces has muerto: \n");
    scanf("%f",&invocador[0].juego[0].rank_kda[1]);
    printf("cuantas asistencias has hecho: \n");
    scanf("\n%f",&invocador[0].juego[0].rank_kda[2]);
    
    invocador[0].juego[0].rank_kda[3] = (invocador[0].juego[0].rank_kda[0] + invocador[0].juego[0].rank_kda[2])/
    invocador[0].juego[0].rank_kda[1];
    
    
    printf("Con que campeon has jugado tu ultima partida: \n");
    scanf("%s",invocador[0].juego[1].campeon);
    
    printf("Cuantos asesinatos has hecho: \n");
    scanf("%f",&invocador[0].juego[1].rank_kda[0]);
    printf("Cuantas veces has muerto: \n");
    scanf("%f",&invocador[0].juego[1].rank_kda[1]);
    printf("cuantas asistencias has hecho: \n");
    scanf("%f",&invocador[0].juego[1].rank_kda[2]);
    
    invocador[0].juego[1].rank_kda[3] = (invocador[0].juego[1].rank_kda[0] + invocador[0].juego[1].rank_kda[2])/
    invocador[0].juego[1].rank_kda[1];
    
    
    printf("Con que campeon has jugado tu ultima partida: \n");
    scanf("%s",invocador[0].juego[2].campeon);
    
    printf("Cuantos asesinatos has hecho: \n");
    scanf("%f",&invocador[0].juego[2].rank_kda[0]);
    printf("Cuantas veces has muerto: \n");
    scanf("%f",&invocador[0].juego[2].rank_kda[1]);
    printf("cuantas asistencias has hecho: \n");
    scanf("%f",&invocador[0].juego[2].rank_kda[2]);
    
    invocador[0].juego[2].rank_kda[3] = (invocador[0].juego[2].rank_kda[0] + invocador[0].juego[2].rank_kda[2])/
    invocador[0].juego[2].rank_kda[1];

    ratio = (invocador[0].juego[0].rank_kda[3]+invocador[0].juego[1].rank_kda[3]+
    invocador[0].juego[2].rank_kda[3])/3;
   
    printf("%s, %.2f este es la media de ratio KDA \n",invocador[0].nombre,ratio);
    
    
     //jugador2
    
    printf("Cual es tu nombre de invocador: \n");
    scanf("%s",invocador[1].nombre);
    
    printf("Con que campeon has jugado tu ultima partida: \n");
    scanf("%s",invocador[1].juego[0].campeon);
    
    printf("Cuantos asesinatos has hecho: \n");
    scanf("%f",&invocador[1].juego[0].rank_kda[0]);
    printf("Cuantas veces has muerto: \n");
    scanf("%f",&invocador[1].juego[0].rank_kda[1]);
    printf("cuantas asistencias has hecho: \n");
    scanf("\n%f",&invocador[1].juego[0].rank_kda[2]);
    
    invocador[1].juego[0].rank_kda[3] = (invocador[1].juego[0].rank_kda[0] + invocador[1].juego[0].rank_kda[2])/
    invocador[1].juego[0].rank_kda[1];
    
    
    printf("Con que campeon has jugado tu ultima partida: \n");
    scanf("%s",invocador[1].juego[1].campeon);
    
    printf("Cuantos asesinatos has hecho: \n");
    scanf("%f",&invocador[1].juego[1].rank_kda[0]);
    printf("Cuantas veces has muerto: \n");
    scanf("%f",&invocador[1].juego[1].rank_kda[1]);
    printf("cuantas asistencias has hecho: \n");
    scanf("%f",&invocador[1].juego[1].rank_kda[2]);
    
    invocador[1].juego[1].rank_kda[3] = (invocador[1].juego[1].rank_kda[0] + invocador[1].juego[1].rank_kda[2])/
    invocador[1].juego[1].rank_kda[1];
    
    
    printf("Con que campeon has jugado tu ultima partida: \n");
    scanf("%s",invocador[1].juego[2].campeon);
    
    printf("Cuantos asesinatos has hecho: \n");
    scanf("%f",&invocador[1].juego[2].rank_kda[0]);
    printf("Cuantas veces has muerto: \n");
    scanf("%f",&invocador[1].juego[2].rank_kda[1]);
    printf("cuantas asistencias has hecho: \n\n");
    scanf("%f",&invocador[1].juego[2].rank_kda[2]);
    
    invocador[1].juego[2].rank_kda[3] = (invocador[1].juego[2].rank_kda[0] + invocador[1].juego[2].rank_kda[2])/
    invocador[1].juego[2].rank_kda[1];

    ratio = (invocador[1].juego[0].rank_kda[3]+invocador[1].juego[1].rank_kda[3]+
    invocador[1].juego[2].rank_kda[3])/3;
   
    printf("%s, %.2f este es la media de ratio KDA",invocador[1].nombre,ratio);

    return 0;
}

/******************************************************************************

ratio_KDA3.c
by Sebastian Fernandez
Date:2020

*******************************************************************************/
#include <stdio.h>

#define MAX_STR 64
#define MAX_INT 4

typedef struct{
    char campeon[MAX_STR];
    int rank_kda[MAX_INT];
} Juego;

typedef struct {
    char nombre[MAX_STR];
    int nivel;
    int experiencia;
    Juego juego;
} Invocador;

int main () {
    Invocador i1 ;
    float ratio;
    
    printf("Cual es tu nombre de invocador: \n");
    scanf("%s",i1.nombre);
    printf("Cual es tu nivel: \n");
    scanf("%d",&i1.nivel);
    printf("Cuanta experiencia ganaste en ese nivel: \n");
    scanf("%d",&i1.experiencia);
    printf("Con que campeon has jugado tu ultima partida: \n");
    scanf("%s",i1.juego.campeon);
    printf("Cuantos asesinatos has hecho: \n");
    scanf("%d",&i1.juego.rank_kda[0]);
    printf("Cuantas veces has muerto: \n");
    scanf("%d",&i1.juego.rank_kda[1]);
    printf("cuantas asistencias has hecho: \n");
    scanf("%d",&i1.juego.rank_kda[2]);
    ratio = (i1.juego.rank_kda[2]+i1.juego.rank_kda[0])/i1.juego.rank_kda[1];
    printf(" %s, de nivel: %d y experiencia %d, tu ratio kda con %s es %f",i1.nombre,i1.nivel,i1.experiencia,i1.juego.campeon,ratio);

    return 0;
}

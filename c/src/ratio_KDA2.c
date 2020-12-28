/******************************************************************************

ratio_KDA2.c
by Sebastian Fernandez
Date:2020

*******************************************************************************/
#include <stdio.h>

#define MAX_STR 64
#define MAX_INT 4
typedef struct {
    char invocador[MAX_STR];
    int nivel;
    int experiencia;
    char campeon[MAX_STR];
    int rank_kda[MAX_INT];
} UserGame;

int main () {
    UserGame u1 ;
    float ratio;
    
    printf("Cual es tu nombre de invocador: \n");
    scanf("%s",u1.invocador);
    printf("Cual es tu nivel: \n");
    scanf("%d",&u1.nivel);
    printf("Cuanta experiencia ganaste en ese nivel: \n");
    scanf("%d",&u1.experiencia);
    printf("Con que campeon has jugado tu ultima partida: \n");
    scanf("%s",u1.campeon);
    printf("Cuantos asesinatos has hecho: \n");
    scanf("%d",&u1.rank_kda[0]);
    printf("Cuantas veces has muerto: \n");
    scanf("%d",&u1.rank_kda[1]);
    printf("cuantas asistencias has hecho: \n");
    scanf("%d",&u1.rank_kda[2]);
    ratio = (u1.rank_kda[2]+u1.rank_kda[0])/u1.rank_kda[1];
    printf(" %s, de nivel: %d y experiencia %d, tu ratio kda con %s es %f",u1.invocador,u1.nivel,u1.experiencia,u1.campeon,ratio);

    return 0;
}

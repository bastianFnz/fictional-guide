/******************************************************************************

ratio_KDA4.c
by Sebastian Fernandez
Date:2020

*******************************************************************************/
#include <stdio.h>

#define MAX_STR 64
#define MAX_INT 5
#define DIM_JUGADORES 6

typedef struct{
    char campeon[MAX_STR];
    float rank_kda[MAX_INT];
} Juego;

typedef struct {
    char nombre[MAX_STR];
    int nivel;
    int experiencia;
    Juego juego;
} Invocador;

int main () {
    Invocador invocador[DIM_JUGADORES];
    float ratio,asistencias,muertes,asesinatos;
    
    //jugador1
    
    printf("Cual es tu nombre de invocador: \n");
    scanf("%s",invocador[0].nombre);
    printf("Cual es tu nivel: \n");
    scanf("%d",&invocador[0].nivel);
    printf("Cuanta experiencia ganaste en ese nivel: \n");
    scanf("%d",&invocador[0].experiencia);
    printf("Con que campeon has jugado tu ultima partida: \n");
    scanf("%s",invocador[0].juego.campeon);
    printf("Cuantos asesinatos has hecho: \n");
    scanf("%f",&invocador[0].juego.rank_kda[0]);
    printf("Cuantas veces has muerto: \n");
    scanf("%f",&invocador[0].juego.rank_kda[1]);
    printf("cuantas asistencias has hecho: \n");
    scanf("%f",&invocador[0].juego.rank_kda[2]);

    invocador[0].juego.rank_kda[3] = 
    (invocador[0].juego.rank_kda[2]+invocador[0].juego.rank_kda[0])/invocador[0].juego.rank_kda[1];
    printf(" %s, de nivel: %d y experiencia %d, tu ratio kda con %s es %f \n\n",
    invocador[0].nombre,invocador[0].nivel,invocador[0].experiencia,invocador[0].juego.campeon,invocador[0].juego.rank_kda[3]);
    
    
    //jugador2
    
    printf("Cual es tu nombre de invocador: \n");
    scanf("%s",invocador[1].nombre);
    printf("Cual es tu nivel: \n");
    scanf("%d",&invocador[1].nivel);
    printf("Cuanta experiencia ganaste en ese nivel: \n");
    scanf("%d",&invocador[1].experiencia);
    printf("Con que campeon has jugado tu ultima partida: \n");
    scanf("%s",invocador[1].juego.campeon);
    printf("Cuantos asesinatos has hecho: \n");
    scanf("%f",&invocador[1].juego.rank_kda[0]);
    printf("Cuantas veces has muerto: \n");
    scanf("%f",&invocador[1].juego.rank_kda[1]);
    printf("cuantas asistencias has hecho: \n");
    scanf("%f",&invocador[1].juego.rank_kda[2]);

    invocador[1].juego.rank_kda[3] = 
    (invocador[1].juego.rank_kda[2]+invocador[1].juego.rank_kda[0])/invocador[1].juego.rank_kda[1];
    printf(" %s, de nivel: %d y experiencia %d, tu ratio kda con %s es %f \n\n",
    invocador[1].nombre,invocador[1].nivel,invocador[1].experiencia,invocador[1].juego.campeon,invocador[1].juego.rank_kda[3]);
    

    //jugador3

    printf("Cual es tu nombre de invocador: \n");
    scanf("%s",invocador[2].nombre);
    printf("Cual es tu nivel: \n");
    scanf("%d",&invocador[2].nivel);
    printf("Cuanta experiencia ganaste en ese nivel: \n");
    scanf("%d",&invocador[2].experiencia);
    printf("Con que campeon has jugado tu ultima partida: \n");
    scanf("%s",invocador[2].juego.campeon);
    printf("Cuantos asesinatos has hecho: \n");
    scanf("%f",&invocador[2].juego.rank_kda[0]);
    printf("Cuantas veces has muerto: \n");
    scanf("%f",&invocador[2].juego.rank_kda[1]);
    printf("cuantas asistencias has hecho: \n");
    scanf("%f",&invocador[2].juego.rank_kda[2]);

    invocador[2].juego.rank_kda[3] = 
    (invocador[2].juego.rank_kda[2]+invocador[2].juego.rank_kda[0])/invocador[2].juego.rank_kda[1];
    printf(" %s, de nivel: %d y experiencia %d, tu ratio kda con %s es %f \n\n",
    invocador[2].nombre,invocador[2].nivel,invocador[2].experiencia,invocador[2].juego.campeon,invocador[2].juego.rank_kda[3]);


    //jugador4
    
    printf("Cual es tu nombre de invocador: \n");
    scanf("%s",invocador[3].nombre);
    printf("Cual es tu nivel: \n");
    scanf("%d",&invocador[3].nivel);
    printf("Cuanta experiencia ganaste en ese nivel: \n");
    scanf("%d",&invocador[3].experiencia);
    printf("Con que campeon has jugado tu ultima partida: \n");
    scanf("%s",invocador[3].juego.campeon);
    printf("Cuantos asesinatos has hecho: \n");
    scanf("%f",&invocador[3].juego.rank_kda[0]);
    printf("Cuantas veces has muerto: \n");
    scanf("%f",&invocador[3].juego.rank_kda[1]);
    printf("cuantas asistencias has hecho: \n");
    scanf("%f",&invocador[3].juego.rank_kda[2]);

    invocador[3].juego.rank_kda[3] = 
    (invocador[3].juego.rank_kda[2]+invocador[3].juego.rank_kda[0])/invocador[3].juego.rank_kda[1];
    printf(" %s, de nivel: %d y experiencia %d, tu ratio kda con %s es %f \n\n",
    invocador[3].nombre,invocador[3].nivel,invocador[3].experiencia,invocador[3].juego.campeon,invocador[3].juego.rank_kda[3]);


    //jugador5
    
    printf("Cual es tu nombre de invocador: \n");
    scanf("%s",invocador[4].nombre);
    printf("Cual es tu nivel: \n");
    scanf("%d",&invocador[4].nivel);
    printf("Cuanta experiencia ganaste en ese nivel: \n");
    scanf("%d",&invocador[4].experiencia);
    printf("Con que campeon has jugado tu ultima partida: \n");
    scanf("%s",invocador[4].juego.campeon);
    printf("Cuantos asesinatos has hecho: \n");
    scanf("%f",&invocador[4].juego.rank_kda[0]);
    printf("Cuantas veces has muerto: \n");
    scanf("%f",&invocador[4].juego.rank_kda[1]);
    printf("cuantas asistencias has hecho: \n");
    scanf("%f",&invocador[4].juego.rank_kda[2]);

    invocador[4].juego.rank_kda[3] = 
    (invocador[4].juego.rank_kda[2]+invocador[4].juego.rank_kda[0])/invocador[4].juego.rank_kda[1];
    printf(" %s, de nivel: %d y experiencia %d, tu ratio kda con %s es %f \n\n",
    invocador[4].nombre,invocador[4].nivel,invocador[4].experiencia,invocador[4].juego.campeon,invocador[4].juego.rank_kda[3]);


    asistencias = (invocador[0].juego.rank_kda[2]+invocador[1].juego.rank_kda[2]+invocador[2].juego.rank_kda[2]+
    invocador[3].juego.rank_kda[2]+invocador[4].juego.rank_kda[2]);
    
    muertes = (invocador[0].juego.rank_kda[1]+invocador[1].juego.rank_kda[1]+invocador[2].juego.rank_kda[1]+
    invocador[3].juego.rank_kda[1]+invocador[4].juego.rank_kda[1]);
    
    asesinatos = (invocador[0].juego.rank_kda[0]+invocador[1].juego.rank_kda[0]+invocador[2].juego.rank_kda[0]+
    invocador[3].juego.rank_kda[0]+invocador[4].juego.rank_kda[0]);
    ratio = (asistencias+asesinatos)/muertes;
    
    printf("EL ratio general de los jugadores es de %f:",ratio);

    return 0;
}

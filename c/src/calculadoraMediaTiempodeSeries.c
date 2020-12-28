/******************************************************************************

CalculadoraMediaTiempodeSeries.c
by Sebastian Fernandez
Date:2020

*******************************************************************************/

#include <stdio.h>

int main() {
    
    double temporadas;
    double capitulos;
    double duracion;
    double intro;
    double total;
    printf("Introdusca la numero de temporadas de la serie: ");
    scanf("%lf",&temporadas);
    
    printf("Introdusca la media de capitulos por temporada: ");
    scanf("%lf",&capitulos);
    
    printf("Introdusca la media de duracion de los capitulos: ");
    scanf("%lf",&duracion);
    
    printf("Introdusca la duracion media de la intro: ");
    scanf("%lf",&intro);
    
    total = temporadas * capitulos * (duracion - intro) / 60;
    printf("EL total de tiempo invertida en la serie es de %lf horas",total);
   
    return 0;
}

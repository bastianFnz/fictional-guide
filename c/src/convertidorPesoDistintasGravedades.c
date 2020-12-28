/******************************************************************************

convertidorPesoDistintasGravedades.c
by Sebastian Fernandez
Date:2020

*******************************************************************************/
#include <stdio.h>

#define Luna 0.1655
#define Marte 0.3895
#define Jupiter 2.640
#define Miller 1.3
#define Pandora 0.8
#define Vulcano 1.4

int main(){
    double peso;
    double nuevoPeso;
    
    printf("Escribe tu peso: ");
    scanf("%lf",&peso);
    
    
    printf("Su peso en la tierra es de %.2f \n",peso);
    
    nuevoPeso = peso * Luna;
    printf("Su peso en la luna es de %.2f  \n",nuevoPeso);
    
    nuevoPeso = peso * Marte;
    printf("Su peso en marte es de %.2f \n",nuevoPeso);
    
    nuevoPeso = peso * Jupiter;
    printf("Su peso en jupiter es de %.2f \n",nuevoPeso);
    
    nuevoPeso = peso * Miller;
    printf("Su peso en el planeta miller es de %.2f \n",nuevoPeso);
    
    nuevoPeso = peso * Vulcano;
    printf("Su peso en la vulcano es de %.2f \n",nuevoPeso);
    return 0;
}

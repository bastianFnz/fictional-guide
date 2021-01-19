/******************************************************************************

convertidorDivisas3.c
by Sebastian Fernandez
Date:2021

*******************************************************************************/
#include <stdio.h>

enum {Dolar=1, Yen, Libra};

int main() {
    int pesos;
    int opcion;

    printf("Escribe un valor en pesos: ");
    scanf("%d",&pesos);
    
    printf("Convertir:\n 1. Dolar\n 2. Yen Japones\n 3.Libra Esterlina\n ");
    scanf("%d",&opcion);
    
    switch (opcion){
        case Dolar:
            printf("El valor de %d en Dolares es: %d",pesos,(pesos/3400));
            break;
        case Yen:
            printf("El valor de %d en Yen Japones es: %d",pesos,(pesos/33));
            break;
        case Libra: 
            printf("El valor de %d en Libra Esterlina es: %d",pesos,(pesos/4600));
            break;
    }

    return 0;
}

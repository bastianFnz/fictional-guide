/******************************************************************************

convertidorDivisas2.c
by Sebastian Fernandez
Date:2021

*******************************************************************************/
#include <stdio.h>

int main() {
    int pesos;
    char opcion;

    printf("Escribe un valor en pesos: ");
    scanf("%d",&pesos);
    
    printf("Convertir:\n (D)olar\n (Y)en Japones\n 3. (L)ibra Esterlina\n ");
    scanf("%c",&opcion);
    
    switch (opcion){
        case 1:
            printf("El valor de %d en Dolares es: %d",pesos,(pesos/3400));
            break;
        case 2:
            printf("El valor de %d en Yen Japones es: %d",pesos,(pesos/33));
            break;
        case 3: 
            printf("El valor de %d en Libra Esterlina es: %d",pesos,(pesos/4600));
            break;
    }

    return 0;
}

/******************************************************************************

convertidorDivisas1.c
by Sebastian Fernandez
Date:2021

*******************************************************************************/
#include <stdio.h>

int main() {
    float pesos;
    char opcion;

    printf("Escribe un valor en pesos: ");
    scanf("%f",&pesos);
    
    printf("Convertir:\n (D)olar\n (Y)en Japones\n (L)ibra Esterlina\n ");
    
    scanf("\n %c",&opcion);
    
    switch (opcion){
        case 'D':
            printf("El valor de %.2f en Dolares es: %.2f",pesos,(pesos/3400));
            break;
        case 'Y':
            printf("El valor de %.2f en Yen Japones es: %.2f",pesos,(pesos/33));
            break;
        case 'L': 
            printf("El valor de %.2f en Libra Esterlina es: %.2f",pesos,(pesos/4600));
            break;
    }

    return 0;
}

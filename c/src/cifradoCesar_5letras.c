/******************************************************************************

cifradoCesar_5letras.c
by Sebastian Fernandez
Date:2020

*******************************************************************************/

#include <stdio.h>

int main() {
    char letra1 ;
    char letra2 ;
    char letra3 ;
    char letra4 ;
    char letra5 ;
    
    printf("Introduce una letra:");
    scanf("%c",&letra1);
    printf("Introduce una otra letra:");
    scanf("\n%c",&letra2);
    printf("Introduce una otra letra:");
    scanf("\n%c",&letra3);
    printf("Introduce una otra letra:");
    scanf("\n%c",&letra4);
    printf("Introduce una ultima letra:");
    scanf("\n%c",&letra5);
    
    
    printf("palabra: %c %c %c %c %c\n",letra1,letra2,letra3,letra4,letra5);
    letra1 = letra1+3;
    letra2 = letra2+3;
    letra3 = letra3+3;
    letra4 = letra4+3;
    letra5 = letra5+3;
    
    printf("cifrada: %c %c %c %c %c\n",letra1,letra2,letra3,letra4,letra5);
    
    return 0;
}

/******************************************************************************

mayoriaEdad.c
by Sebastian Fernandez
Date:2021

*******************************************************************************/

#include <stdio.h>

int main() {
    int edad;
    
    printf("Introduce edad:");
    scanf("%d", &edad);

    if (edad >= 18 && edad%3==0)
        printf("Eres mayor de edad y tu edad es múltiplo de tres \n");
    else if (edad >= 18 && edad%3!=0)
        printf("Eres mayor de edad y tu edad no es múltiplo de tres \n");
    else
        printf("Eres menor de edad \n");
        
    return 0;
}

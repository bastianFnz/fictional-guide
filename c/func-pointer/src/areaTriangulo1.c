/******************************************************************************

areaTriangulo1.c
by Sebastian Fernandez
Date:2021

*******************************************************************************/
#include <stdio.h>

int areaTriangulo(){
    int base,altura;
    float area;
    
    printf("Ingrese la base del triangulo: ");
    scanf("\n %d",&base);
    
    printf("Ingrese la altura del triangulo: ");
    scanf("\n %d",&altura);
    
    area = (base * altura)/2;
    printf("El area del triangulo con base %d y altura %d es: %.2f",base,altura,area);
}


int main()
{
    areaTriangulo();

    return 0;
}

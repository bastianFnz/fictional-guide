/******************************************************************************

areaTriangulo3.c
by Sebastian Fernandez
Date:2021

*******************************************************************************/
#include <stdio.h>

float areaTriangulo(int base,int altura){
    return (base * altura)/2;
}


int main()
{
    float area;
    int x,y;
    printf("Ingrese la base del triangulo: ");
    scanf("\n %d",&x);
    
    printf("Ingrese la altura del triangulo: ");
    scanf("\n %d",&y);
    
    area = areaTriangulo(x,y);

    printf("El area del triangulo con base %d y altura %d es: %.2f",x,y,area);
    return 0;
}



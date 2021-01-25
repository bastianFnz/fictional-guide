/******************************************************************************

areaTriangulo2.c
by Sebastian Fernandez
Date:2021

*******************************************************************************/
#include <stdio.h>

int areaTriangulo(int base, int altura){
    
    float area;
    
    area = (base * altura)/2;
    printf("El area del triangulo con base %d y altura %d es: %.2f",base,altura,area);
}


int main()
{
    int x,y;
    
    printf("Ingrese la base del triangulo: ");
    scanf("\n %d",&x);
    
    printf("Ingrese la altura del triangulo: ");
    scanf("\n %d",&y);
    areaTriangulo(x,y);

    return 0;
}

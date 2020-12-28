/******************************************************************************

simpleFormulario_SizeDatos.c
by Sebastian Fernandez
Date:2020

*******************************************************************************/
#include <stdio.h>
#include <limits.h>

int main() {
   
    char sexo;
    int cp, hp;
    double altura, peso;
    int caramelos;
    
    printf("Ingrese el sexo (M/F): ");
    scanf("%c",&sexo);
    
    printf("Ingrese el cp: ");
    scanf("%d",&cp);
    printf("Ingrese el hp: ");
    scanf("%d",&hp);
    
    printf("Ingrese el peso: ");
    scanf("%lf",&peso);
    printf("Ingrese la altura:");
    scanf("%lf",&altura);
    
    printf("Ingrese el numero de caramelos:");
    scanf("%d",&caramelos);
    
    printf("Sexo: %ld\n",sizeof(sexo));
    printf("CP: %ld\nHP: %ld\n",sizeof(cp),sizeof(hp));
    printf("Peso: %ld \nAltura: %ld \n",sizeof(peso),sizeof(altura));
    printf("Caramelos: %ld",sizeof(caramelos));
   
    return 0;
}

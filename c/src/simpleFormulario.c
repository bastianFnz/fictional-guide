/******************************************************************************

simpleFormulario.c
by Sebastian Fernandez
by Sebastian Fernandez

*******************************************************************************/
#include <stdio.h>

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
    
    printf("Sexo: %c\n",sexo);
    printf("CP: %d\nHP: %d\n",cp,hp);
    printf("Peso: %.1lf \nAltura: %.2lf \n",peso,altura);
    printf("Caramelos: %d",caramelos);
   
    return 0;
}

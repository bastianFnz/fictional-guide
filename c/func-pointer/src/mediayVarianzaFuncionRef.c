/******************************************************************************

mediayVarianzaFuncionRef.c
by Sebastian Fernandez
Date:2021

*******************************************************************************/
#include <stdio.h>

void estadistica (int x, int y, double *pMedia, double *pVar){
    (*pMedia) = (double)(x+y)/2;
    (*pVar)  = (double)((x-(*pMedia))*(x-(*pMedia))+(y-(*pMedia))*(y-(*pMedia)))/2;
} 

int main() {
    int num1, num2;
    double Media, Var;

    printf("Ingresa un numero entero: ");
    scanf("%d",&num1);
    
    printf("Ingrese otro Numero entero ");
    scanf("\n %d",&num2);
    
    estadistica(num1,num2,&Media,&Var);
    
    printf("La media es %.2lf \n",Media);
    printf("La varianza es %.2lf",Var);
    return 0;
}


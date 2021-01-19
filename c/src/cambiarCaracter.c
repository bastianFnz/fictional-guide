/******************************************************************************

cambiarCaracter.c
by Sebastian Fernandez
Date:2021

*******************************************************************************/


#include <stdio.h>

#define DIM 64
int main()
{
    int i, cant;
    char caracter[DIM];
    char caracMin;
    char caracMay;
    
    printf("Ingresa una frase sin espacio: ");
    scanf("%s",caracter);
    
    
    printf("Ingrese un caracter en minuscula: ");
    
    do{
        scanf("\n%c",&caracMin);
        if(caracMin < 'a' || caracMin > 'z'){
            printf("Erro el caracter no corresponde. Vulve a intentar");
        }
        
    }while(caracMin < 'a' || caracMin > 'z');
    
    
    printf("Ingrese un caracter en mayuscula: ");
    
    do{
        scanf("\n%c",&caracMay);
        if(caracMay < 'A' || caracMay > 'Z'){
            printf("Erro el caracter no corresponde. Vulve a intentar");
        }
        
    }while(caracMay < 'A' || caracMay > 'Z');
    
    i = 0;
    
    while(caracter[i] != 0 ){
        if(caracter[i] == caracMin)
            caracter[i] = caracMay;
            
        i++;
    }
    printf("%s ",caracter);
    i-=1;
    
    while(i>=0){
        printf("%c",caracter[i]);
        i--;
    }
    
    return 0;
}

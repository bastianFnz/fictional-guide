/******************************************************************************

dividirCadena.c
by Sebastian Fernandez
Date:2021

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#define DIM 64

int main (){
    int i, middle, longitud;
    int j =0;
    char cadena1[DIM];
    char cadena2[DIM];
    
    
    printf ("Ingrese una cadena de caracteres : ");
    scanf ("%s", cadena1);

    longitud = strlen (cadena1);
    if (longitud % 2 == 0){
        middle = middle = (longitud/2);    
    }else{
        middle = (longitud/2+1);    
    }

    
    for (i = middle; i < longitud; i++){
      printf ("%c \n", cadena1[i]);
      cadena2[j] = cadena1[i];
      printf ("%c \n", cadena2[j]);
      j++;
    }
    cadena2[j]=0;
    
    printf("La cadena tiene %d,su mitad es %d",longitud,middle);
    printf ("La segunda mitad de la cadena %s, es %s ",cadena1, cadena2);
    return 0;
}

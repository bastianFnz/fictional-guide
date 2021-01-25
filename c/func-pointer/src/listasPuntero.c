/******************************************************************************

listasPuntero.c
by Sebastian Fernandez
Date:2021

*******************************************************************************/
#include <stdio.h>

#define TAM 3

int main() {
    int i=0, a[TAM]={1,2,3}, *p;
    double b[TAM]={1.2,3.1,2.5}, *q;

    p=a;
    q=b;
    while(i < TAM ){
    
        printf("Lista a: %d | Lista b: %.1lf \n",*p,*q);
        i++;
        p++;
        q++;
 
    }
    
    return 0;
}


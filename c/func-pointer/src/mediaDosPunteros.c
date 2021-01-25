/******************************************************************************

mediaDosPunteros.c
by Sebastian Fernandez
Date:2021

*******************************************************************************/
#include <stdio.h>

int main() {
    int num1,num2, *p1, *p2;
    double med, *m1;
    
    p1=&num1;
    p2=&num2;
    m1=&med;
    
    printf("Ingresa un numero: ");
    scanf("%d",p1);
    
    printf("Ingresa otro numero: ");
    scanf("\n %d",p2);
    
    
    *m1 = (double) (*p1 + *p2)/2;
    printf("%.2lf", med); 
    
    return 0;
}


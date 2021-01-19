/******************************************************************************

adivinaNumero.c                         
by Sebastian Fernandez
Date:2021

*******************************************************************************/
#include <stdio.h>

int main() {      
    int clave, numero;     
    
    do{
        printf("Ingresa una clave de dos digito: ");
        scanf("\n %d",&clave);
    }while(clave > 99 || clave < 0);
    
    printf("*******************\n \n \n \n \n");        
    printf("*******************\n");           
    
    do{
        printf("Ingresa un numero entre 0 y el 99: ");     
        scanf("\n %d",&numero);         
        if(numero < clave){             
            printf("Este numero no es. %d es demasiado pequeño!! \n",numero);         
            
        }else if(numero > clave){             
            printf("Este numero no es. %d es demasiado grande!! \n", numero);         
            
        }                  
        
    }while(clave != numero || (numero <0 || numero>99));
    
    printf("Correcto!! la clave era: %d",clave);
    
    return 0; 
    
} 

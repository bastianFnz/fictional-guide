/******************************************************************************

calendarioDeMeses.c
by Sebastian Fernandez
Date:2021

*******************************************************************************/

#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int anyo;
} Date;

int main() {
  Date fecha1; 
  Date fecha2;
  
  printf("Ingresa una fecha dd mm aaaa: \n");
  scanf("%d %d %d",&fecha1.dia,&fecha1.mes,&fecha1.anyo);
  
  
  printf("Ingresa una fecha dd mm aaaa: \n");
  scanf("%d %d %d",&fecha2.dia,&fecha2.mes,&fecha2.anyo);
  
  if((fecha1.dia <= 31 && fecha1.dia >= 1 && fecha1.mes <=12 && fecha1.mes >=1) &&
    (fecha2.dia <= 31 && fecha2.dia >= 1 && fecha2.mes <=12 && fecha2.mes >=1)){
  
    
      if(fecha1.anyo > fecha2.anyo ){
        printf("La fecha %d %d %d es mayor que la fecha %d %d %d",
            fecha1.dia,fecha1.mes,fecha1.anyo,fecha2.dia,fecha2.mes,fecha2.anyo);
      }else if(fecha1.anyo < fecha2.anyo ){
        printf("La fecha %d %d %d es menor que la fecha %d %d %d",
            fecha1.dia,fecha1.mes,fecha1.anyo,fecha2.dia,fecha2.mes,fecha2.anyo);
      }else if(fecha1.anyo == fecha2.anyo && (fecha1.mes > fecha2.mes)){
        printf("La fecha %d %d %d es mayor que la fecha %d %d %d",
            fecha1.dia,fecha1.mes,fecha1.anyo,fecha2.dia,fecha2.mes,fecha2.anyo);
      }else if(fecha1.anyo == fecha2.anyo && (fecha1.mes < fecha2.mes)){
        printf("La fecha %d %d %d es menor que la fecha %d %d %d",
            fecha1.dia,fecha1.mes,fecha1.anyo,fecha2.dia,fecha2.mes,fecha2.anyo);
      }else if(fecha1.anyo == fecha2.anyo && (fecha1.mes == fecha2.mes) && (fecha1.dia > fecha2.dia)){
        printf("La fecha %d %d %d es mayor que la fecha %d %d %d",
            fecha1.dia,fecha1.mes,fecha1.anyo,fecha2.dia,fecha2.mes,fecha2.anyo);
      }else if(fecha1.anyo == fecha2.anyo && (fecha1.mes == fecha2.mes) && (fecha1.dia < fecha2.dia)){
        printf("La fecha %d %d %d es menor que la fecha %d %d %d",
            fecha1.dia,fecha1.mes,fecha1.anyo,fecha2.dia,fecha2.mes,fecha2.anyo);
      }else if(fecha1.anyo == fecha2.anyo && (fecha1.mes == fecha2.mes) && (fecha1.dia == fecha2.dia)){
        printf("La fecha %d %d %d es igual que la fecha %d %d %d",
            fecha1.dia,fecha1.mes,fecha1.anyo,fecha2.dia,fecha2.mes,fecha2.anyo);  
      }
      
  
    }else{
      printf("Los datos no son validos");
     
    }


    return 0;
}

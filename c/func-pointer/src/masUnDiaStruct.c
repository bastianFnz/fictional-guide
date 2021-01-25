/******************************************************************************

masUnDiaStruct.c
by Sebastian Fernandez
Date:2021

*******************************************************************************/
#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int anyo;
} Fecha;

void validarFecha(Fecha *dateline){
    if(dateline->dia > 30){
        dateline->dia = 1;
        dateline->mes +=1;
    }
    
    if(dateline->mes > 12){
        dateline-> mes =1;
        dateline-> anyo +=1;
    }
}

void incrementaDia(Fecha *fec){
    fec->dia +=1;
    validarFecha(fec);
}

int main()
{
    Fecha fec;
    do{
    printf("Introduce un dia: ");
    scanf("\n %d",&fec.dia);
    
    printf("Introduce un mes: ");
    scanf("\n %d",&fec.mes);
    
    printf("Introduce un aÃ±o: ");
    scanf("\n %d",&fec.anyo);
    }while(fec.dia<1 || fec.dia >30 ||fec.mes < 1 || fec.mes >12 );
    
    incrementaDia(&fec);
    
    printf("El dia siguiente al introducido: %d \\ %d \\ %d",fec.dia,fec.mes,fec.anyo);

    return 0;
}



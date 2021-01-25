/******************************************************************************

comparaTablaFechas.c
by Sebastian Fernandez
Date:2021

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int dia;
    int mes;
    int anyo;
} Fecha;

int main()
{
    int dim,i=0;
    Fecha *regis,itera;
    
    printf("Ingrese la dimension de la tabla: \n");
    scanf("%d",&dim);
    
    regis = (Fecha *) malloc(dim*sizeof(Fecha));
    
    if(regis == NULL){
        printf("Error la reserva de memoria a fallado");
        return 1;
    }
    
    do{
        printf("Ingrese el dia ");
        scanf("%d",&regis[i].dia);
        printf("Ingrese el mes ");
        scanf("%d",&regis[i].mes);
        printf("Ingrese el aÃ±io ");
        scanf("%d",&regis[i].anyo);
        i++;
    }while(i<dim);
    
    itera= regis[0];
    
    
    for (int j = 0; j < dim; j++) {
        if(regis[j].anyo<=itera.anyo){
            
            if(regis[j].mes<=itera.mes){
                if(regis[j].dia<itera.dia){
                    
                    printf("%d\\%d\\%d \n",regis[j].dia,regis[j].mes,regis[j].anyo);    
                    itera= regis[j];
                }
            }
        }
    }
    
  
    printf("itera %d %d %d",itera.dia,itera.mes,itera.anyo);
    free(regis);

    return 0;
}

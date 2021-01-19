/******************************************************************************

calcularMediaTxtListado.c
by Sebastian Fernandez
Date:2021 

*******************************************************************************/
#include <stdio.h>

#define DIM 12

int main(){
	FILE *fIn;
	char dni[DIM],grade[DIM], name[DIM]="listado.txt";
	double note, media=0,suma=0;
	int cont=0;

	fIn = fopen(name, "r+");

	if(fIn == NULL){
		printf("ERROR al abrir el archivo %s",name);
		return 1;
	}

	while(fscanf(fIn, "%s %lf %s",dni,&note,grade) == 3){
		suma+=note;
		cont++;
	}

	media=suma/cont;

	fprintf(fIn,"La nota media es de: %lf",media);
	printf("Las operaciones han finalizado con exito %lf",media);

	fclose(fIn);

	return 0;

}

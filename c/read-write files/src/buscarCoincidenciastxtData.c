/******************************************************************************

buscarCoincidenciastxtData.c
by Sebastian Fernandez
Date:2021

*******************************************************************************/
#include <stdio.h>

#define FILELONG 64
#define DIM 16

int main(){

	char letra, fileName[FILELONG];
	char cadena[DIM];
	int num1,num2,i=0;
	FILE *fIn;
	printf("Teclee el nombre del archivo: ");
	scanf("%s",fileName);

	printf("Ingrese una letra: ");
	scanf("\n%c",&letra);

	printf("File %s, letter %c \n",fileName,letra);

	fIn = fopen(fileName,"r+");

	if(fIn == NULL){
		printf("ERROR: no se pudo abrir el archivo %s",fileName);
		return 1;
	}

	while(fscanf(fIn,"%s %d %d",cadena,&num1,&num2) == 3){
		if(cadena[0] == letra){
			i++;	
		}
	}
	
	fprintf(fIn,"Hay %d de los nombres que comienza por la %c \n",i,letra);

	printf("El resultado se ha guardado correctamente al final del fichero %s \n",fileName);
	fclose(fIn);
	return 0;
}

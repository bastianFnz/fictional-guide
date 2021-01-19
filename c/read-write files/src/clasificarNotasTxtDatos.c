/******************************************************************************

clasificarNotasTxtDatos.c
by Sebastian Fernandez
Date:2021 

*******************************************************************************/

#include <stdio.h>

#define TAM 14

int main(){
	FILE *fIn, *fOut;
	char entrada[TAM]="datos.txt", salida[TAM]="listado.txt";
	char dni[TAM];
	int model, hits, fail, blank;
	double note;
	if((fIn = fopen(entrada, "r")) == NULL){
		printf("ERROR abriendo el archivo %s.\n",entrada);
		return 1;
	}

	if((fOut = fopen(salida, "w")) == NULL){
		printf("ERROR abriendo el archivo %s. \n",salida);
		fclose(fOut);
		return 1;
	}

	while(fscanf(fIn, "%s",dni) ==1){

		fscanf(fIn,"%d %d %d %d %lf",&model,&hits,&fail,&blank,&note);

		if(note	>= 0 && note <5){
			fprintf(fOut,"%s %.2lf Suspendido \n",dni,note);
		}else if(note > 5 && note < 7){
			fprintf(fOut,"%s %.2lf Aprobado \n",dni,note);
		}else if(note >= 7 && note < 9){
			fprintf(fOut,"%s %.2lf Notable \n",dni,note);
		}else if(note >=9 && note < 10){
			fprintf(fOut,"%s %.2lf Sobresaliente \n",dni,note);
		}else if(note == 10){
			fprintf(fOut,"%s %.2lf Matrícula \n",dni,note);
		}

	}

	printf("Operacion a terminado con exito!");
	fclose(fOut);
	fclose(fIn);

	return 0;

}

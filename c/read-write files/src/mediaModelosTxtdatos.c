/******************************************************************************

mediaModelosTxtdatos.c
by Sebastian Fernandez
Date:2021

*******************************************************************************/

#include <stdio.h>

int main() {
    FILE *f;
    char dni[10];
    int modelo, i, acierto, fallo, blanco, cont1, cont2;
    double nota, media1, media2;

    f = fopen("datos.txt", "r");
    if (f == NULL) { 
        printf("Error abriendo el archivo\n");
        return 1;
    }

    for (i=0; fscanf(f, "%s", dni) == 1; i++) {
        fscanf(f, "%d", &modelo);
        fscanf(f, "%d", &acierto);
        fscanf(f, "%d", &fallo);
        fscanf(f, "%d", &blanco);
        fscanf(f, "%lf", &nota);
     
        if(modelo ==1){
            media1+=nota;
            cont1++;
        }else if(modelo ==2){
            media2+=nota;
            cont2++;
        }
        
        printf("%s %d %lf\n",dni,modelo,nota);
    }
        printf("la media del modelo 1 es %lf  \n", media1/cont1);
        printf("la media del modelo 2 es %lf", media2/cont2);

    fclose(f);

    return 0;
}

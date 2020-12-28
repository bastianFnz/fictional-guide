/******************************************************************************

estrutura2.c
by Sebastian Fernandez
Date:2020

*******************************************************************************/
#include <stdio.h>

#define MAX_STR 128

int main() {
    struct {
        char autor[MAX_STR];
        char titulo[MAX_STR];
        int anyo;
    } novela = {"", "El héroe discreto", 2013};
   
    printf("Introduzca el autor de %s, publicado en %d: ", novela.titulo, novela.anyo);
    scanf("%s", novela.autor);
   
    printf("%s fue escrito por %s en %d.\n", novela.titulo, novela.autor, novela.anyo);
    
    return 0;
}

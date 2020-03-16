#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "declaracoes.c"
#include "funcoes.c"

int main() {
    FILE* fp;
    char palavra[TAM];
    
    inicializaVetor(palavra);
    
    printf("\nInsira uma palavra: ");
    gets(palavra);
    
    createFile(fp);
    writeFile(fp, palavra);
    attachFile(fp, palavra);
    readFile(fp);
    
    return 0;
}
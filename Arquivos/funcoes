void inicializaVetor(char* str) {
    int i = 0;
    while(i < TAM) {
        str[i] = 0;
        i++;
    }
}

void createFile(FILE* fp) {
    if((fp = fopen("arquivo", "a"))  == NULL)
        perror("\nErro de abertura de arquivo...");
    else
        printf("\nArquivo criado com sucesso!");
    
    fclose(fp);
}

void writeFile(FILE* fp, char* str) {
    fp = fopen("arquivo", "w");
    fprintf(fp, "%s\n", str);
    fflush(fp);
    fclose(fp);
}

void attachFile(FILE* fp, char* str) {
    fp = fopen("arquivo", "a");
    fprintf(fp, "%s\n", str);
    fflush(fp);
    fclose(fp);
}

void readFile(FILE* fp) {
    char c;
    fp = fopen("arquivo", "r");
    rewind(fp);
    printf("\n\n");
        while (!feof(fp)) {
            fscanf(fp, "%c", &c);
            printf("%c", c);
        }
    fclose(fp);
}
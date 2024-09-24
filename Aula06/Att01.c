#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *f1, *f2;
    char str[30];
    f1 = fopen("arq1.txt", "w");

    if(f1 == NULL) {
        printf("Erro na abertura do arquivo!\n");
        system("pause");
        exit(1);
    }

    puts("Digite uma pequena frase abaixo.");
    gets(str);

    int retorno = fputs(str,f1);
    if(retorno == EOF) {
        printf("Erro na gravação!\n");
    }

    printf("\nSucesso ao gravar no arquivo 1!\n");
    fclose(f1);

    f1 = fopen("arq1.txt", "r");
    f2 = fopen("arq2.txt", "w");

    if(f1 == NULL || f2 == NULL) {
        printf("Erro na abertura dos arquivos!\n");
        system("pause");
        exit(1);
    }

    fgets(str, 30, f1);
    strupr(str);
    retorno = fputs(str, f2);
    if(retorno == EOF) {
        printf("Erro na gravação!\n");
        system("pause");
        exit(1);
    }

    printf("Sucesso ao gravar no arquivo 2!\n\n");

    fclose(f2);
    f2 = fopen("arq2.txt", "r");
    if(f2 == NULL) {
        printf("Erro na abertura do arquivo!\n");
    }

    rewind(f1);
    char *resultado = fgets(str, 30, f1);
    if(resultado == NULL) {
        printf("Erro na leitura!\n");
    }
    else {
        printf("Conteudo do arquivo 1: %s\n", str);
    }

    resultado = fgets(str, 30, f2);
    if(resultado == NULL) {
        printf("Erro na leitura!\n");
    }
    else {
        printf("Conteudo do arquivo 2: %s\n\n", str);
    }

    fclose(f1);
    fclose(f2);
    system("pause");
    return 0;
}

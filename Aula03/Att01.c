#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nomeTrabalhador[30];
    int idadeTrabalhador;
    float salarioTrabalhador;

    puts("Digite o nome do trabalhador abaixo.");
    gets(nomeTrabalhador);
    puts("Digite a idade do trabalhador abaixo.");
    scanf("%d",&idadeTrabalhador);
    puts("Digite o salario do trabalhador abaixo.");
    scanf("%f",&salarioTrabalhador);

    system("cls");
    puts("\t\t\tDetalhes do trabalhador:\n");
    printf("Nome: %s\n", nomeTrabalhador);
    printf("Idade: %d\n", idadeTrabalhador);
    printf("Salario: %.2f", salarioTrabalhador);

    return 0;
}

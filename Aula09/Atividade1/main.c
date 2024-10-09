#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "my_lib.h"

int main () {
    setlocale(LC_ALL,"Portuguese");
    float salarioBruto=0, salarioFamilia=0, vantagens=0, inss=0, irpf=0, deducoes=0, numeroHoras=0, salarioHora=0, valorPorFilho=0, taxaIR=0;
    int numeroFilhos=0;

    printf("Digite por quantas horas voce trabalha: ");
    scanf("%f", &numeroHoras);
    printf("\nDigite o valor do seu salário por hora: ");
    scanf("%f", &salarioHora);
    printf("\nDigite o número de filhos que você tem: ");
    scanf("%d", &numeroFilhos);
    printf("\nDigite o quanto o governo paga por filho: ");
    scanf("%f", &valorPorFilho);
    printf("\nDigite a taxa do imposto de renda: ");
    scanf("%f", &taxaIR);

    calculoVantagens(&salarioBruto, &salarioFamilia, &vantagens, &numeroHoras, &salarioHora, &numeroFilhos, &valorPorFilho);
    calculoDeducoes(&salarioBruto, &inss, &irpf, &deducoes, &taxaIR);

    printf("\n\nSalário bruto: %.2f", salarioBruto);
    printf("\nSalário familia: %.2f", salarioFamilia);
    printf("\nVantagens: %.2f", vantagens);
    printf("\nValor do IRPF: %.2f", taxaIR);
    printf("\nValor do INSS: %.2f", inss);
    printf("\nValor do IRPF: %.2f", irpf);
    printf("\nValor das deduções: %.2f\n\n", deducoes);

    system("pause");
    return 0;
}



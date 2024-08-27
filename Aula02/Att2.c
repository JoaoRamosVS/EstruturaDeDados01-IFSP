#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Prot�tipos de fun��es com passagem por refer�ncia que est�o ap�s a escrita do main
void calculoVantagens(float *salarioBruto, float *salarioFamilia, float *vantagens, float *numeroHoras, float *salarioHora, int *numeroFilhos, float *valorPorFilho);
void calculoDeducoes(float *salarioBruto, float *inss, float *irpf, float *deducoes, float *taxaIR);

int main () {
    setlocale(LC_ALL,"Portuguese");
    float salarioBruto=0, salarioFamilia=0, vantagens=0, inss=0, irpf=0, deducoes=0, numeroHoras=0, salarioHora=0, valorPorFilho=0, taxaIR=0;
    int numeroFilhos=0;

    printf("Digite por quantas horas voce trabalha: ");
    scanf("%f", &numeroHoras);
    printf("\nDigite o valor do seu sal�rio por hora: ");
    scanf("%f", &salarioHora);
    printf("\nDigite o n�mero de filhos que voc� tem: ");
    scanf("%d", &numeroFilhos);
    printf("\nDigite o quanto o governo paga por filho: ");
    scanf("%f", &valorPorFilho);
    printf("\nDigite a taxa do imposto de renda: ");
    scanf("%f", &taxaIR);

    calculoVantagens(&salarioBruto, &salarioFamilia, &vantagens, &numeroHoras, &salarioHora, &numeroFilhos, &valorPorFilho);
    calculoDeducoes(&salarioBruto, &inss, &irpf, &deducoes, &taxaIR);

    printf("\n\nSal�rio bruto: %.2f", salarioBruto);
    printf("\nSal�rio familia: %.2f", salarioFamilia);
    printf("\nVantagens: %.2f", vantagens);
    printf("\nValor do IRPF: %.2f", taxaIR);
    printf("\nValor do INSS: %.2f", inss);
    printf("\nValor do IRPF: %.2f", irpf);
    printf("\nValor das dedu��es: %.2f", deducoes);
}

void calculoVantagens(float *salarioBruto, float *salarioFamilia, float *vantagens, float *numeroHoras, float *salarioHora, int *numeroFilhos, float *valorPorFilho) {
    *salarioBruto = *numeroHoras * *salarioHora;
    *salarioFamilia = *numeroFilhos * *valorPorFilho;
    *vantagens = *salarioBruto + *salarioFamilia;
}

void calculoDeducoes(float *salarioBruto, float *inss, float *irpf, float *deducoes, float *taxaIR) {
    *inss = *salarioBruto * 0.08;
    *irpf = *salarioBruto * *taxaIR;
    *deducoes = *inss + *irpf;
}

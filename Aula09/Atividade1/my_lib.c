#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "my_lib.h"

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

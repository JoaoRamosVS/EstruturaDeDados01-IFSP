#include <stdio.h>
#include <stdlib.h>
#include "my_lib.h"

struct armazenaResultado{
    float resultado;
};
armRes *criaResultado(float valor) {
    armRes *r = (armRes*) malloc(sizeof(armRes));
    if(r!=NULL) {
        r->resultado = valor;
    }
    return r;
}

void somar(armRes *r, float n1, float n2) {
    r->resultado = n1 + n2;
}

void subtrair(armRes *r, float n1, float n2) {
    r->resultado = n1 - n2;
}

void multiplicar(armRes *r, float n1, float n2) {
    r->resultado = n1 * n2;
}

void dividir(armRes *r, float n1, float n2) {
    r->resultado = n1 / n2;
}

void acessaUltimoResultado(armRes *r, float *res) {
    *res = r->resultado;
}

void liberaResultado(armRes *r) {
    free(r);
}

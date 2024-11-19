#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main()
{
    int x;
    ALUNO al_consulta, al1, al2, al3;
    FILA *fi = NULL;
    al1.matricula = 100;
    al1.n1 = 8.3;
    al1.n2 = 8.4;
    al1.n3 = 8.5;

    al2.matricula = 110;
    al2.n1 = 7.3;
    al2.n2 = 7.4;
    al2.n3 = 7.5;

    al3.matricula = 120;
    al3.n1 = 6.3;
    al3.n2 = 6.4;
    al3.n3 = 6.5;

    fi = criaFila();

    x = tamanhoFila(fi);
    printf("\nO tamanho da fila e: %d", x);

    x = filaCheia(fi);
    if(x) {
        printf("\nA fila esta cheia!");
    }
    else {
        printf("\nA fila nao esta cheia");
    }

    x = filaVazia(fi);
    if(x) {
        printf("\nA fila esta vazia!");
    }
    else {
        printf("\nA fila nao esta vazia.");
    }

    x = insereFila(fi, al1);
    if(x) {
        printf("\nElemento %d inserido com sucesso!", x);
    }
    else {
        printf("\nErro, elemento nao inserido.");
    }

    x = insereFila(fi, al2);
    if(x) {
        printf("\nElemento %d inserido com sucesso!", x);
    }
    else {
        printf("\nErro, elemento nao inserido.");
    }

    x = insereFila(fi, al3);
    if(x) {
        printf("\nElemento %d inserido com sucesso!", x);
    }
    else {
        printf("\nErro, elemento nao inserido.");
    }

    x = tamanhoFila(fi);
    printf("\nO tamanho da fila e: %d", x);

    x = consultaFila(fi, &al_consulta);
    if(x) {
        printf("\nConsulta realizada com sucesso: ");
        printf("\nMatricula: %d", al_consulta.matricula);
        printf("\nNota 1:    %.2f", al_consulta.n1);
        printf("\nNota 2:    %.2f", al_consulta.n2);
        printf("\nNota 3:    %.2f", al_consulta.n3);
    }
    else {
        printf("\nErro, consulta nao realizada.");
    }

    x = removeFila(fi);
    if(x) {
        printf("\nElemento %d removido com sucesso!", x);
    }
    else {
        printf("\nErro, elemento nao removido.");
    }

    x = consultaFila(fi, &al_consulta);
    if(x) {
        printf("\nConsulta realizada com sucesso: ");
        printf("\nMatricula: %d", al_consulta.matricula);
        printf("\nNota 1:    %.2f", al_consulta.n1);
        printf("\nNota 2:    %.2f", al_consulta.n2);
        printf("\nNota 3:    %.2f", al_consulta.n3);
    }
    else {
        printf("\nErro, consulta nao realizada.");
    }

    liberaFila(fi);
    return 0;
}

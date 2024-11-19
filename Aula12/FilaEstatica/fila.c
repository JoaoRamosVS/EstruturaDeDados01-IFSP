#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

struct fila {
    int inicio, fim, qtd;
    ALUNO dados[MAX];
};

FILA *criaFila() {
    FILA *fi;
    fi = (FILA*) malloc(sizeof(FILA));
    if(fi != NULL) {
        fi->inicio = 0;
        fi->fim = 0;
        fi->qtd = 0;
    }
}

void liberaFila(FILA *fi) {
    free(fi);
}

void abortaPrograma() {
    printf("ERRO! Fila nao foi alocada, programa sera encerrado...\n\n\n");
    system("pause");
}

int tamanhoFila(FILA *fi) {
    if(fi == NULL) {
        abortaPrograma();
    }
    return fi->qtd;
}

int filaCheia(FILA *fi) {
    if(fi == NULL) {
        abortaPrograma();
    }
    if(fi->qtd == MAX) {
        return 1;
    }
    else {
        return 0;
    }
}

int filaVazia(FILA *fi) {
    if(fi == NULL) {
        abortaPrograma();
    }
    if(fi->qtd == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int insereFila(FILA *fi, ALUNO al) {
    if(fi == NULL) {
        abortaPrograma();
    }
    if(fi->qtd == MAX) {
        return 0;
    }
    fi->dados[fi->fim] = al;
    fi->fim = (fi->fim + 1) % MAX;
    fi->qtd++;
    return al.matricula;
}

int removeFila(FILA *fi) {
    int matricula;
    if(fi == NULL) {
        abortaPrograma();
    }
    if(fi->qtd==0) {
        return 0;
    }
    matricula = fi->dados[fi->inicio].matricula;
    fi->inicio = (fi->inicio + 1) % MAX;
    fi->qtd--;
    return matricula;
}

int consultaFila(FILA *fi, ALUNO *al) {
    if(fi == NULL) {
        abortaPrograma();
    }
    if(fi->qtd==0) {
        return 0;
    }
    *al = fi->dados[fi->inicio];
    return 1;
}

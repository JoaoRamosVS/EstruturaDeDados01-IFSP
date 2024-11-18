#include<stdio.h>
#include<stdlib.h>
#include "listaLigada.h"

struct elemento {
    ALUNO dados;
    struct elemento *prox;
};
typedef struct elemento ELEM;

Lista *criaLista() {
    Lista *li;
    li = (Lista*) malloc(sizeof(Lista));
    if(li != NULL){
        *li = NULL;
    }
    return li;
}

void abortaPrograma() {
    printf("ERRO! Lista nao foi alocada, programa sera encerrado...\n\n\n");
    system("pause");
    exit(1);
}

void apagaLista(Lista *li) {
    if(li != NULL) {
        ELEM *no;
        while((*li) != NULL) {
            no = *li;
            *li = (*li)->prox;
            free(no);
        }
        free(li);
    }
}

int tamanhoLista(Lista *li) {
    if(li == NULL) {
        abortaPrograma();
    }
    int acum=0;
    ELEM *no = *li;
    while(no != NULL) {
        acum++;
        no = no->prox;
    }
    return acum;
}

int listaCheia(Lista *li) {
    if(li == NULL) {
        abortaPrograma();
    }
    return 0;
}

int listaVazia(Lista *li) {
    if(li == NULL) {
        abortaPrograma();
    }
    if(*li == NULL) {
        return 1;
    }
    return 0;
}

int insereInicio(Lista *li, ALUNO al) {
    if(li == NULL) {
        abortaPrograma();
    }
    ELEM *no = (ELEM*) malloc(sizeof(ELEM));
    if(no == NULL) {
        return 0;
    }
    no->dados=al;
    no->prox = (*li);
    *li = no;
    return al.matricula;
}

int insereFinal(Lista *li, ALUNO al) {
    if(li == NULL) {
        abortaPrograma();
    }
    ELEM *no = (ELEM*) malloc(sizeof(ELEM));
    if(no == NULL) {
        return 0;
    }
    no->dados = al;
    no->prox = NULL;
    if((*li) == NULL) {
        *li = no;
    }
    else {
        ELEM *aux = *li;
        while(aux->prox != NULL) {
            aux = aux->prox;
        }
        aux->prox = no;
    }
    return al.matricula;
}

int insereOrdenado(Lista *li, ALUNO al) {
    if(li == NULL) {
        abortaPrograma();
    }

    ELEM *no = (ELEM*) malloc(sizeof(ELEM));
    if(no == NULL) {
        return 0;
    }
    no->dados = al;
    if(listaVazia(li)) {
        no->prox = (*li);
        *li = no;
        return al.matricula;
    }
    else {
        ELEM *ant, *atual= *li;
        while(atual != NULL && atual->dados.matricula < al.matricula) {
            ant = atual;
            atual = atual->prox;
        }
        if(atual == *li) {
            no->prox = (*li);
            *li = no;
        }
        else {
            no->prox = ant->prox;
            ant->prox = no;
        }
        return al.matricula;
    }
}

int removeInicio(Lista *li) {
    int matricula;
    if(li == NULL) {
        abortaPrograma();
    }
    if(*li == NULL) {
        return 0;
    }
    ELEM *no = *li;
    matricula = no->dados.matricula;
    *li = no->prox;
    free(no);
    return matricula;
}

int removeFinal(Lista *li) {
    int matricula;
    if(li == NULL) {
        abortaPrograma();
    }
    if((*li) == NULL) {
        return 0;
    }
    ELEM *ant, *no = *li;
    while(no->prox != NULL) {
        ant = no;
        no = no->prox;
    }
    if(no == (*li)) { //remove o primeiro?
        *li = no->prox; //o próximo é null
    }
    else {
        ant->prox = no->prox;
    }
    matricula = no->dados.matricula;
    free(no);
    return matricula;
}

int removeOrdenado(Lista *li, int mat) {
    int matricula;
    if(li == NULL) {
        abortaPrograma();
    }
    ELEM *ant, *no = *li;
    while(no != NULL && no->dados.matricula != mat) {
        ant = no;
        no = no->prox;
    }
    if(no == NULL) {
        return 0;
    }
    if(no == *li) {
        *li = no->prox;
    }
    else {
        ant->prox = no->prox;
    }
    matricula = no->dados.matricula;
    free(no);
    return matricula;
}

int consultaPosicao(Lista *li, int posicao, ALUNO *al) {
    if(li == NULL) {
        abortaPrograma();
    }
    if(posicao <=0) {
        return;
    }
    ELEM *no = *li;
    int i = 1;
    while(no != NULL && i < posicao) {
        no = no->prox;
        i++;
    }
    if(no == NULL) {
        return 0;
    }
    else {
        *al = no->dados;
        return 1;
    }
}

int consultaMatricula(Lista *li, int mat, ALUNO *al) {
    if(li == NULL) {
        abortaPrograma();
    }
    ELEM *no = *li;
    while(no != NULL && no->dados.matricula != mat) {
        no = no->prox;
    }
    if(no == NULL) {
        return 0;
    }
    else {
        *al =no->dados;
        return 1;
    }
}

ALUNO coletaDados() {
    ALUNO al;
    printf("\nDigite a matricula do aluno: ");
    scanf("%d", &al.matricula);
    printf("\nDigite a 1a nota: ");
    scanf("%f",&al.n1);
    printf("\nDigite a 2a nota: ");
    scanf("%f",&al.n2);
    printf("\nDigite a 3a nota: ");
    scanf("%f",&al.n3);
    return al;
}

#include <stdio.h>
#include <stdlib.h>
#include "listaLigada.h"

int main()
{
    int x=0, r=1, matricula=0;
    ALUNO al_consulta;
    Lista *li = NULL;

    if((li = criaLista()) == NULL) {
        abortaPrograma();
    }

    while(r != 0) {
        system("cls");
        printf("\t\tSISTEMA DE ALUNOS - MENU\n\n");
        printf("1 - Incluir novo aluno\n");
        printf("2 - Consultar aluno por matricula\n");
        printf("3 - Excluir aluno\n");
        printf("0 - Fechar programa\n->: ");
        scanf("%d",&r);

        switch(r) {
            case 1 :
                system("cls");
                ALUNO novoAluno = coletaDados();
                x = insereOrdenado(li, novoAluno);
                if(x) {
                    printf("\nAluno %d inserido ordenadamente com sucesso!\n",x);
                }
                else {
                    printf("\nNao foi possivel inserir o aluno.\n");
                }
                system("pause");
            break;

            case 2 :
                system("cls");
                printf("Digite o numero da matricula: ");
                scanf("%d", &matricula);
                x = consultaMatricula(li, matricula, &al_consulta);
                if(x) {
                    printf("\n\nConsulta aluno matriculado:");
                    printf("\nMatricula:   %d", al_consulta.matricula);
                    printf("\nNota 1:      %.2f", al_consulta.n1);
                    printf("\nNota 2:      %.2f", al_consulta.n2);
                    printf("\nNota 3:      %.2f\n", al_consulta.n3);
                }
                else {
                    printf("\Matricula %d nao encontrada.\n", matricula);
                }
                system("pause");
            break;

            case 3 :
                system("cls");
                printf("Digite o numero da matricula que deseja excluir: ");
                scanf("%d", &matricula);
                x = removeOrdenado(li, matricula);
                if(x) {
                    printf("\nAluno %d removido ordenadamente com sucesso!\n",x);
                }
                else {
                    printf("\nNao foi possivel remover o aluno.\n");
                }
                system("pause");
                break;

        }
    }

    system("cls");
    if(listaVazia(li)) {
        printf("Lista esta vazia.\n");
    }
    else {
        printf("Lista nao esta vazia.\n");
    }
    x = tamanhoLista(li);
    printf("\nO tamanho da lista e: %d\n\n", x);
    apagaLista(li);
    return 0;
}

/* x = insereInicio(li, al1);
    if(x) {
        printf("\nAluno %d inserido com sucesso!\n",x);
    }
    else {
        printf("\nNao foi possivel inserir o aluno.");
    }

    x = insereFinal(li, al2);
    if(x) {
        printf("\nAluno %d inserido com sucesso!\n",x);
    }
    else {
        printf("\nNao foi possivel inserir o aluno.");
    }

    x = insereOrdenado(li, al3);
    if(x) {
        printf("\nAluno %d inserido ordenadamente com sucesso!\n",x);
    }
    else {
        printf("\nNao foi possivel inserir o aluno.");
    }

    x = consultaPosicao(li, posicao, &al_consulta);
    if(x) {
        printf("\n\nConsulta na posicao %d:", posicao);
        printf("\nMatricula:   %d", al_consulta.matricula);
        printf("\nNota 1:      %.2f", al_consulta.n1);
        printf("\nNota 2:      %.2f", al_consulta.n2);
        printf("\nNota 3:      %.2f", al_consulta.n3);
    }
    else {
        printf("\nPosicao %d nao existe.", posicao);
    }

    x = removeInicio(li);
    if(x) {
        printf("\nAluno %d removido do inicio com sucesso!\n",x);
    }
    else {
        printf("\nNao foi possivel remover do inicio.");
    }

    x = removeFinal(li);
    if(x) {
        printf("\nAluno %d removido do final com sucesso!\n",x);
    }
    else {
        printf("\nNao foi possivel remover do final.");
    }

    x = removeOrdenado(li, matricula);
    if(x) {
        printf("\nAluno %d removido ordenadamente com sucesso!\n",x);
    }
    else {
        printf("\nNao foi possivel remover o aluno.");
    }

    */

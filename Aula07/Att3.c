#include<stdio.h>
#include<stdlib.h>
void preencheMatriz(int **matriz, int linhas, int colunas);
void exibeMatriz(int **matriz, int linhas, int colunas);

int main() {
    int linhas=0, colunas=0;
    printf("Digite a quantidade de linhas das duas matrizes: ");
    scanf("%d",&linhas);
    printf("\nDigite a quantidade de colunas das duas matrizes: ");
    scanf("%d",&colunas);

    int **m1 = (int**) malloc(linhas * sizeof(int*));
    for(int i=0;i<linhas;i++) {
        m1[i] = (int*) malloc(colunas * sizeof(int));
    }
    int **m2 = (int**) malloc(linhas * sizeof(int*));
    for(int i=0;i<linhas;i++) {
        m2[i] = (int*) malloc(colunas * sizeof(int));
    }
    int **somaMatrizes = (int**) malloc(linhas * sizeof(int*));
    for(int i=0;i<linhas;i++) {
        somaMatrizes[i] = (int*) malloc(colunas * sizeof(int));
    }
    if(m1 == NULL || m2 == NULL || somaMatrizes == NULL) {
        printf("Erro na alocação de memória!\n");
        exit(1);
    }
    system("cls");

    printf("\t\tMatriz 1: \n\n");
    preencheMatriz(m1, linhas, colunas);
    printf("\t\tMatriz 2: \n\n");
    preencheMatriz(m2, linhas, colunas);

    printf("Matriz 1: \n\n");
    exibeMatriz(m1, linhas, colunas);
    printf("\nMatriz 2: \n\n");
    exibeMatriz(m2, linhas, colunas);

    printf("\nSoma das matrizes: \n\n");
    for(int i=0;i<linhas;i++) {
        for(int j=0;j<colunas;j++) {
            somaMatrizes[i][j] = m1[i][j] + m2[i][j];
            printf("%d ", somaMatrizes[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    free(m1);
    free(m2);
    free(somaMatrizes);
    system("pause");
    return 0;
}

void preencheMatriz(int **matriz, int linhas, int colunas) {
    for(int i=0;i<linhas;i++) {
        for(int j=0;j<colunas;j++) {
            printf("Valor na posição %d na linha %d: ", j+1, i+1);
            scanf("%d",&matriz[i][j]);
        }
    }
    system("cls");
}

void exibeMatriz(int **matriz, int linhas, int colunas) {
    for(int i=0;i<linhas;i++) {
        for(int j=0;j<colunas;j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

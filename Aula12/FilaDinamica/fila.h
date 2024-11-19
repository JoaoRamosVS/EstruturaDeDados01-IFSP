#define MAX 100

typedef struct aluno {
    int matricula;
    float n1, n2, n3;
} ALUNO;

typedef struct fila FILA;

FILA *criaFila();

void liberaFila(FILA *fi);

int tamanhoFila(FILA *fi);

int filaCheia(FILA *fi);

int filaVazia(FILA *fi);

int insereFila(FILA *fi, ALUNO al);

int removeFila(FILA *fi);

int consultaFila(FILA *fi, ALUNO *al);

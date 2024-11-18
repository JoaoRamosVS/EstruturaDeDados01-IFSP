typedef struct aluno{
    int matricula;
    float n1, n2, n3;
}ALUNO;

typedef struct elemento* Lista;

Lista *criaLista();

void abortaPrograma();

void apagaLista(Lista *li);

int tamanhoLista(Lista *li);

int listaCheia(Lista *li);

int listaVazia(Lista *li);

int insereInicio(Lista *li, ALUNO al);

int insereFinal(Lista *li, ALUNO al);

int insereOrdenado(Lista *li, ALUNO al);

int removeInicio(Lista *li);

int removeFinal(Lista *li);

int removeOrdenado(Lista *li, int mat);

int consultaPosicao(Lista *li, int posicao, ALUNO *al);

int consultaMatricula(Lista *li, int mat, ALUNO *al);

ALUNO coletaDados();

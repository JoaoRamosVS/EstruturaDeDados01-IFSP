typedef struct armazenaResultado armRes;
armRes *criaResultado(float valor);
void somar(armRes *r, float n1, float n2);
void subtrair(armRes *r, float n1, float n2);
void multiplicar(armRes *r, float n1, float n2);
void dividir(armRes *r, float n1, float n2);
void acessaUltimoResultado(armRes *r, float *res);
void liberaResultado(armRes *r);

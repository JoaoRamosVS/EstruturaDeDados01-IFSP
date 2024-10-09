typedef struct pontoCartesiano PTcart;

PTcart *criaPTcart(float x, float y);

void liberaPTcart(PTcart *p);

void acessaPTcart(PTcart *p, float *x, float *y);

void atribuiPTcart(PTcart *p, float x, float y);

float distanciaPTcart(PTcart *p1, PTcart *p2);

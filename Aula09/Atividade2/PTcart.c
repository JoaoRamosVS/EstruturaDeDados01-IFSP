#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "PTcart.h"

struct pontoCartesiano {
    float x;
    float y;
};

PTcart *criaPTcart(float x, float y) {
    PTcart *p = (PTcart*) malloc(sizeof(PTcart));
    if(p!=NULL) {
        p->x = x;
        p->y = y;
    }
    return p;
}

void liberaPTcart(PTcart *p) {
    free(p);
}

void acessaPTcart(PTcart *p, float *x, float *y) {
    *x = p->x;
    *y = p->y;
}

void atribuiPTcart(PTcart *p, float x, float y) {
    p->x = x;
    p->y = y;
}

float distanciaPTcart(PTcart *p1, PTcart *p2) {
    float dx = p1->x - p2->x;
    float dy = p1->y - p2->y;
    return sqrt(dx * dx + dy * dy);
}

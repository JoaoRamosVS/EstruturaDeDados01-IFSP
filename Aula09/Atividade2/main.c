#include <stdio.h>
#include <stdlib.h>
#include "PTcart.h"

int main()
{
    float d=0, retornaX, retornaY;
    PTcart *p = NULL, *q = NULL;
    //PTcart r;
    p = criaPTcart(10,21);
    q = criaPTcart(7,25);
    d = distanciaPTcart(p,q);
    //p.y = 3;
    //q.x = 2.34;
    printf("Distancia entre os pontos cartesianos: %f\n", d);
    atribuiPTcart(q, 15, -2);
    d = distanciaPTcart(p, q);
    printf("Nova distancia entre os pontos cartesianos: %f\n", d);
    acessaPTcart(p, &retornaX, &retornaY);
    printf("Valores armazenados em p: X = %.2f e Y = %.2f\n", retornaX, retornaY);
    acessaPTcart(q, &retornaX, &retornaY);
    printf("Valores armazenados em q: X = %.2f e Y = %.2f\n", retornaX, retornaY);
    liberaPTcart(p);
    liberaPTcart(q);
    system("pause");
    return 0;
}

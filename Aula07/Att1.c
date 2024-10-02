#include<stdio.h>
#include<stdlib.h>

int main() {
    int *v, n=7, posicao=0;

    v = malloc(n * sizeof(int));

    if(v == NULL) {
        printf("Erro na alocação de memória!\n");
        exit(1);
    }

    for(int i=0; posicao<n; i++) {
        if(i % 2 != 0 && i > 0) {
            v[posicao] = i;
            posicao++;
        }
    }

    for(int i=0; i<n; i++) {
        printf("Posicao %d do vetor: %d\n", i+1, v[i]);
    }
    free(v);
    system("pause");
    return 0;
}

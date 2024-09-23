#include <stdio.h>
#include <stdlib.h>

int main() {
    void *ptrgen;
    float vetorF[10];
    double vetorD[10];

    puts("Enderecos das posicoes do vetor de tipo float:");
    for(int i=0; i<10; i++) {
        ptrgen = &vetorF[i];
        printf("Endereco da posicao %d: %p\n", i, ptrgen);
    }

    puts("\nEnderecos das posicoes do vetor de tipo double:");
    for(int i=0; i<10; i++) {
        ptrgen = &vetorD[i];
        printf("Endereco da posicao %d: %p\n", i, ptrgen);
    }

    system("pause");
    return 0;
}

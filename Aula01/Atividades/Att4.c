#include <stdio.h>
#include <stdlib.h>

int main() {
    int v1[5], v2[5];
    int i = 0, j = 0;

    for(i = 0; i < 5; i ++) {
        printf("\nInforme o valor do elemento %d do vetor 1: ", i + 1);
        scanf("%d", &v1[i]);
    }

    for(j = 0; j < 5; j ++) {
        printf("\nInforme o valor do elemento %d do vetor 2: ", j + 1);
        scanf("%d", &v2[j]);
    }

    printf("\n\n\n\n\n Vetor 1: \n");
    for(i = 0; i < 5; i++) {
        printf("%d ", v1[i]);
    }

    printf("\n\n Vetor 2: \n");
    for(i = 0; i < 5; i++) {
        printf("%d ", v2[i]);
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if(v1[i] == v2[j]) {
                printf("\n\nValores iguais na posicao: %d e %d\n", i + 1, j + 1);
            }
        }
    }
    printf("\n\n\n");
    system("pause");
    return 0;
}

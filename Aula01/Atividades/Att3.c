#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;

    printf("Digite um numero qualquer: ");
    scanf("%d", &a);
    if(a == 1) {
        printf("A \n");
    }
    else if(a == 2) {
        printf("B \n");
    }
    else if(a == 3) {
        printf("C \n");
    }
    else if(a == 4) {
        printf("D \n");
    }
    else {
        printf("Escolha invalida!");
    }

    printf("\n\n");
    system("pause");
    return 0;
}

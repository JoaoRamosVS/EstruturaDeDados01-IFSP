#include<stdio.h>
#include<stdlib.h>

int main() {
    int a, b;

    printf("Informe dois numeros: \n\n");
    scanf("%d %d", &a, &b);

    if(a == b){
        printf("Os numeros sao iguais \n\n\n");
    }
    else if(a > b) {
        printf("O primeiro e maior \n\n\n");
    }
    else if(a < b){
        printf("O segundo e maior \n\n\n");
    }
    system("pause");
    return 0;
}

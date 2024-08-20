#include<stdio.h>
#include<stdlib.h>

int main() {
    int a, b;

    printf("Informe dois numeros: \n\n");
    scanf("%d %d", &a, &b);

    if(a == b){
        printf("Os numeros sao iguais \n\n\n");
    }
    system("pause");
    return 0;
}

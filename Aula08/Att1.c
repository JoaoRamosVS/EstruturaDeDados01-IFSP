#include<stdlib.h>
#include<stdio.h>

void contagemIterativa(int n);
void contagemRecursiva(int n);

int main() {
    int n=0;

    printf("Digite um numero: ");
    scanf("%d",&n);

    printf("\n\nVersao iterativa:\n\n");
    contagemIterativa(n);
    printf("\n\nVersao recursiva:\n\n");
    contagemRecursiva(n);

    system("pause");
    return 0;
}

void contagemIterativa(int n) {
    for(n;n>=0;n--) {
        printf("%d\n",n);
    }
}

void contagemRecursiva(int n) {
    if(n == 0) {
        printf("%d\n\n",0);
    }
    else {
        printf("%d\n",n);
        n--;
        contagemRecursiva(n);
    }
}

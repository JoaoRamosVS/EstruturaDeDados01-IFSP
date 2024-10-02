#include<stdio.h>
#include<stdlib.h>

int funcRecursiva(int n);
int funcIterativa(int n);

int main() {
    int n=0, escolha=0;
    printf("Digite um numero: ");
    scanf("%d",&n);
    printf("\nEscolha qual funcao deseja utilizar.\nRecursiva - ""1""\nIterativa - ""2""\n->: ");
    scanf("%d",&escolha);
    if(escolha == 1) {
        printf("\nResultado: %d", funcRecursiva(n));
    }
    else if(escolha == 2) {
        printf("\nResultado: %d", funcIterativa(n));
    }

    printf("\n\n");
    system("pause");
    return 0;
}

int funcRecursiva(int n) {
    if(n == 0){
        return 0;
    }
    return (n+funcRecursiva(n-1));
}

int funcIterativa(int n){
    int soma=0;
    for(int i=1;i<=n;i++) {
        soma += i;
    }
    return soma;
}

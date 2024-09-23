#include <stdio.h>
#include <stdlib.h>

void adicionarCem(int *vA, int *vB, int *vC);

int main() {
    int a, b, c, *v1, *v2, *v3;
    puts("Digite o primeiro valor inteiro: ");
    scanf("%d", &a);
    puts("\nDigite o segundo valor inteiro: ");
    scanf("%d", &b);
    puts("\nDigite o terceiro valor inteiro: ");
    scanf("%d", &c);

    v1=&a;
    v2=&b;
    v3=&c;

    system("cls");

    adicionarCem(v1, v2, v3);
    printf("Primeiro valor acrescido: %d\n", *v1);
    printf("Segundo valor acrescido: %d\n", *v2);
    printf("Terceiro valor acrescido: %d", *v3);

    system("pause");
    return 0;
}

void adicionarCem(int *vA, int *vB, int *vC) {
    *vA += 100;
    *vB += 100;
    *vC += 100;
}

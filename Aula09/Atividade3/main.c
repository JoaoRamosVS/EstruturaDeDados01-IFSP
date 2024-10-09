#include <stdio.h>
#include <stdlib.h>
#include "my_lib.h"
void inserirValores(float *n1, float *n2);
int main()
{
    char ans;
    float n1=0, n2=0, res=0;
    armRes *r = criaResultado(0);
    if(r == NULL) {
        printf("Erro na alocação de memória!\n");
        exit(1);
    }
    do {
        system("cls");
        printf("\t\tMENU - OPERACOES\n\n");
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("5 - Ver ultimo resultado\n");
        printf("0 - Sair\n->: ");
        ans = getchar();

        switch(ans) {
        case '1':
            system("cls");
            inserirValores(&n1,&n2);
            somar(r, n1, n2);
            acessaUltimoResultado(r, &res);
            printf("\n\nResultado: %.2f\n\n", res);
            system("pause");
            break;

        case '2':
            system("cls");
            inserirValores(&n1,&n2);
            subtrair(r, n1, n2);
            acessaUltimoResultado(r, &res);
            printf("\n\nResultado: %.2f\n\n", res);
            system("pause");
            break;

        case '3':
            system("cls");
            inserirValores(&n1, &n2);
            multiplicar(r, n1, n2);
            acessaUltimoResultado(r, &res);
            printf("\n\nResultado: %.2f\n\n", res);
            system("pause");
            break;

        case '4':
            system("cls");
            inserirValores(&n1,&n2);
            dividir(r, n1, n2);
            acessaUltimoResultado(r, &res);
            printf("\n\nResultado: %.2f\n\n", res);
            system("pause");
            break;

        case '5':
            system("cls");
            acessaUltimoResultado(r, &res);
            printf("Ultimo resultado: %.2f\n\n", res);
            system("pause");
            break;
        }
    } while(ans != '0');

    liberaResultado(r);
    return 0;
}

void inserirValores(float *n1, float *n2) {
    printf("Digite o primeiro numero: ");
    scanf("%f",n1);
    printf("\nDigite o segundo numero: ");
    scanf("%f",n2);
}

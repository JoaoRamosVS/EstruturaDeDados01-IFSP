#include <stdio.h>
#include <stdlib.h>

typedef struct funcionario {
    int ID;
    char nome[30];
    int idade;
    float salario;
} FUNC;

int main() {
    FUNC f[5];
    FILE *f1;

    puts("Digite os dados dos funcionarios:");
    for(int i=0; i<5; i++) {
        printf("\nID do funcionario %d: ", i+1);
        scanf("%d",&f[i].ID);
        printf("\nNome do funcionario %d: ", i+1);
        fflush(stdin);
        gets(f[i].nome);
        printf("\nIdade do funcionario %d: ", i+1);
        scanf("%d", &f[i].idade);
        printf("\nSalario do funcionario %d: ", i+1);
        scanf("%f",&f[i].salario);
        printf("\n");
    }

    f1 = fopen("arquivo.txt", "wb");
    if(f1 == NULL) {
        printf("\nErro na abertura do arquivo!\n");
        system("pause");
        exit(1);
    }

    int total_gravado = fwrite(f, sizeof(FUNC), 5, f1);
    if(total_gravado != 5) {
        printf("Erro na gravação!\n");
        system("pause");
        exit(1);
    }
    else {
        printf("Arquivo gravado com sucesso!\n\n");
    }

    fclose(f1);
    system("pause");
    return 0;
}

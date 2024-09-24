#include <stdio.h>
#include <stdlib.h>

typedef struct funcionario {
    int ID;
    char nome[30];
    int idade;
    float salario;
} FUNC;

int main() {
    FUNC f;
    FILE *f1;

    f1 = fopen("arquivo.txt", "rb");
    fseek(f1, 2*sizeof(FUNC), SEEK_SET);
    fread(&f, sizeof(FUNC), 1, f1);

    printf("Terceiro registro do arquivo de funcionarios: \n\n");
    printf("ID: %d\nNome: %s\nIdade: %d\nSalario: %.2f\n\n", f.ID, f.nome, f.idade, f.salario);

    fclose(f1);
    system("pause");
    return 0;
}

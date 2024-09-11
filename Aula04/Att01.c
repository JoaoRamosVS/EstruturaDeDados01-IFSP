#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct funcionario {
    int ID;
    char nome[30];
    int idade;
    float salario;
};

int main () {
    struct funcionario func[5];
    int i;
    for(i=0; i<5; i++) {
        printf("Dados funcionario %d:\n", i+1);
        printf("ID ..: ");
        scanf("%d",&func[i].ID);
        printf("Nome ..: ");
        fflush(stdin);
        fgets(func[i].nome, 29, stdin);
        printf("Idade ..: ");
        scanf("%d",&func[i].idade);
        printf("Salario ..: ");
        scanf("%f",&func[i].salario);
        printf("\n");
    }

    printf("\n\nDados inseridos: \n\n");

    for(i=0; i<5; i++) {
        printf("ID do funcionario %d ..: %d", i+1, func[i].ID);
        printf("\nNome ..: %s", func[i].nome);
        printf("\nIdade: ..: %d", func[i].idade);
        printf("\nSalario ..: %.2f\n\n", func[i].salario);
    }

    return 0;
}

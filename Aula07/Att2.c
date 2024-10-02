#include<stdio.h>
#include<stdlib.h>

int main() {
    int qtdAlunos;
    float *notas, media=0;
    printf("Digite a quantidade de alunos: ");
    scanf("%d",&qtdAlunos);

    notas = malloc(qtdAlunos * sizeof(float));
    if(notas == NULL){
        printf("Erro na alocação da memória!\n");
        exit(1);
    }

    for(int i=0;i<qtdAlunos;i++){
        printf("Digite a %d nota:  ", i+1);
        scanf("%f",&notas[i]);
    }
    system("cls");

    for(int i=0;i<qtdAlunos;i++) {
        printf("Nota do aluno %d: %.1f\n", i+1, notas[i]);
        media += notas[i];
    }
    media /= qtdAlunos;
    printf("\nMedia aritmetica dos alunos: %.1f\n\n", media);
    free(notas);
    system("pause");
    return 0;
}

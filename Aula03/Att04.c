#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char palavra1[30], palavra2[30];

    puts("Digite a primeira string abaixo.");
    fgets(palavra1, 29, stdin);
    palavra1[strlen(palavra1) - 1] = '\0';
    puts("Digite a segunda string abaixo.");
    fgets(palavra2,29,stdin);
    palavra2[strlen(palavra2) - 1] = '\0';

    system("cls");
    if(strstr(palavra1, palavra2)) {
        printf("A string ""%s"" esta contida na string ""%s"" \n\n", palavra2, palavra1);
    }
    else {
        printf("A string ""%s"" nao esta contida na string ""%s"" \n\n", palavra2, palavra1);
    }

    system("pause");
    return 0;
}

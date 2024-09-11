#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char palavra[30];

    puts("Digite uma string em minusculo.");
    fgets(palavra, 29, stdin);
    palavra[strlen(palavra) - 1] = '\0';
    strlwr(palavra);

    for(int i=0; i<strlen(palavra); i++) {
        palavra[i] -= 32;
    }

    system("cls");
    printf("String nova em minusculo: %s\n\n", palavra);

    system("pause");
    return 0;
}

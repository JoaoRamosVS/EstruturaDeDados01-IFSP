#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *strUpper(char *string);
char *strLower(char *string);

int main() {
    char palavra[30];

    puts("Digite uma string abaixo.");
    fgets(palavra, 29, stdin);
    palavra[strlen(palavra) - 1] = '\0';

    system("cls");
    for(int i=0; i<strlen(palavra);i++) {
        if(islower(palavra[i])) {
            palavra[i] = toupper(palavra[i]);
        }
        else if(isupper(palavra[i])) {
            palavra[i] = tolower(palavra[i]);
        }
    }

    printf("String com caixas invertidas: %s\n", palavra);
    strUpper(palavra);
    printf("String em maiusculo: %s\n", palavra);
    strLower(palavra);
    printf("String em minusculo: %s\n\n", palavra);

    system("pause");
    return 0;
}

char *strUpper(char *string) {
    while(*string) {
        *string = toupper(*string);
        string++;
    }
    return string;
}

char *strLower(char *string) {
    while(*string) {
        *string = tolower(*string);
        string++;
    }
    return string;
}

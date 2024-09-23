#include <stdio.h>
#include <stdlib.h>

int main() {
   int a, b, *endA, *endB;
   puts("Digite abaixo o primeiro valor inteiro.");
   scanf("%d",&a);
   puts("Digite abaixo o segundo valor inteiro.");
   scanf("%d",&b);

   endA = &a;
   endB = &b;

   system("cls");

   if(endA > endB) {
        printf("Endereco da variavel A: %p\nConteudo da variavel A: %d\n\n", endA, *endA);
   }
   else {
        printf("Endereço da variavel B: %p\nConteudo da variavel B: %d\n\n", endB, *endB);
   }

   system("pause");
   return 0;
}

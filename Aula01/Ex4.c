#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    printf("Informe um numero: \n");
    scanf("%d", &a);

    b = (a > 12) ? 100 : 200;

    printf("Valor de B: %d \n\n\n", b);

    system("pause");
    return 0;
}

#include <stdio.h>

int main()
{
    int a;
    int b;
    int soma;
    int div;
    int sub;
    int mult;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    soma = a + b;
    div = a / b;
    sub = a - b;
    mult = a * b;

    printf("Soma = %d\nDivisão = %d\nSubtração = %d\nMutiplicação = %d\n", soma, div, sub, mult);

    return 0;
}
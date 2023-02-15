#include <stdio.h>

int main()
{
    float temperaturaC;
    float temperaturaF;
        
    printf("Informe a temperatura na escala Celsius: ");
    scanf("%f", &temperaturaC);

   temperaturaF = ((9.0 / 5.0) * temperaturaC) + 32.0;

    printf("Uma temperatura de %f graus Celsius equivale a %f graus Fahrenheit.\n", temperaturaC, temperaturaF);

    return 0;
}
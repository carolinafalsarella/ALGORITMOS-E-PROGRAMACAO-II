#include <stdio.h>
#include <math.h>

int main()
{
    float raio;
    float area;
    
    printf("Informe o raio do círculo: ");
    scanf("%f", &raio);

   area = M_PI * (raio * raio);

    printf("Um círculo com raio %f tem área igual a %f.\n", raio, area);

    return 0;
}
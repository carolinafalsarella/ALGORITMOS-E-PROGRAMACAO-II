#include <stdio.h>
#include <math.h>

int main()
{
    float cateto1;
    float cateto2;
    float hipotenusa;
    
    printf("Informe o cateto 1: ");
    scanf("%f", &cateto1);

    printf("Informe o cateto 2: ");
    scanf("%f", &cateto2);

   hipotenusa = sqrt((cateto1 * cateto1) + (cateto2 * cateto2));

    printf("Um triângulo retângulo com lados %f e %f tem uma hipotenusa igual a %f.\n", cateto1, cateto2, hipotenusa);

    return 0;
}
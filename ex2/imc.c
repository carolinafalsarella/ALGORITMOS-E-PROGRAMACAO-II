#include <stdio.h>

int main()
{
    float peso;
    float altura;
    float imc;
    
    printf("Informe o peso em quilogramas: ");
    scanf("%f", &peso);

    printf("Informe a altura em metros: ");
    scanf("%f", &altura);

   imc = peso / (altura * altura);

    printf("O IMC de uma pessoa com peso %f kg e altura %f m é igual a %f\n", peso, altura, imc);

    return 0;
}
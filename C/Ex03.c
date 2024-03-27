#include <stdio.h>

float Somar(float x, float y)
{
    return x+y;
}

float Subtrair(float x, float y)
{
    return x-y;
}

float Multiplicar(float x, float y)
{
    return x*y;
}

float Dividir(float x, float y)
{
    return x/y;
}

int main()
{
    float x, y;

    float soma, subtracao, multiplicacao, divisao;

    printf("Digite o valor de x: ");
    scanf("%f", &x);
    printf("Digite o valor de y: ");
    scanf("%f", &y);

    soma = Somar(x, y);
    subtracao = Subtrair(x, y);
    multiplicacao = Multiplicar(x, y);
    divisao = Dividir(x, y);

    printf("Soma: %.2f\n", Somar(x, y));
    printf("Subtração: %.2f\n", subtracao);
    printf("Multiplicação: %.2f\n", multiplicacao);
    printf("Divisão: %.2f\n", divisao);

    return 0;
}
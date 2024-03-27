#include <stdio.h>

int main()
{
    float x;

    printf("Digite um número: ");
    scanf("%f", &x);

    if(x != 2)
    {
        float f;
        f = 8/(2-x);

        printf("Resultado %.2f\n", f);
    }
    else
    {
        printf("Divisão por zero!\n");
        printf("Impossível efetuar o calculo\n");
    }

    return 0;
}
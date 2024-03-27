#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, delta, raiz1, raiz2;

    printf("Dada o polinomio Ax² + Bx + C \n");
    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    printf("Digite o valor de C: ");
    scanf("%f", &c);

    if(a != 0) // Equação 2 grau
    {
        delta = pow(b, 2) - 4*a*c;

        if(delta > 0) // duas raizes
        {
            raiz1 = (-b + sqrt(delta))/(2*a);
            raiz2 = (-b - sqrt(delta))/(2*a);

            printf("Raiz 1: %.2f\n", raiz1);

            printf("Raiz 2: %.2f\n", raiz2);
        }
        else if(delta == 0)
        {
            raiz2 = -b/(2*a);
            printf("Raiz: %.2f\n", raiz1);
        }
        else
        {
            printf("Não existe raiz\n");
        }
    }
    else // Equação 1 grau
    {
        raiz1 = -c/b;
        printf("Raiz da equação 1 grau: %.2f\n", raiz1);
    }

    return 0;
}
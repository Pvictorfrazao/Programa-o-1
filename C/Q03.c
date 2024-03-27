#include <stdio.h>
#include <math.h>

int main()
{
    float x1, y1, r1, x2, y2, r2, d;

    printf("Digite a coordenada x da figura 1: ");
    scanf("%f", &x1);
    printf("Digite a coordenada y da figura 1: ");
    scanf("%f", &y1);
    printf("Digite raio da figura 1: ");
    scanf("%f", &r1);

    printf("Digite a coordenada x da figura 2: ");
    scanf("%f", &x2);
    printf("Digite a coordenada y da figura 2: ");
    scanf("%f", &y2);
    printf("Digite o raio da figura 2: ");
    scanf("%f", &r2);

    d = sqrt( pow(x2 - x1, 2) + pow(y2 - y1, 2) );

    if(d > (r1 + r2))
    {
        printf("Não Colidem \n");
    }
    else if(d == (r1 + r2))
    {
        printf("Na borda\n");
    }
    else
    {
        printf("Sobrepondo\n");
    }


    return 0;
}
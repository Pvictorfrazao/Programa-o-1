#include <stdio.h>

int main()
{
    float x, y;

    printf("Digite as coordenadas para o pouso do drone\n");
    printf("Coordenada X: ");
    scanf("%f", &x);
    printf("Coordenada Y: ");
    scanf("%f", &y);

    if((x >= 4 && x <= 14 && y >= 4 && y <= 10) ||
       (x >= 16 && x <= 26 && y >= 2 && y <= 12))
    {
        printf("Pouso autorizado \n");
    }
    else
    {
        printf("Pouso não autorizado \n");
    }

    return 0;
}
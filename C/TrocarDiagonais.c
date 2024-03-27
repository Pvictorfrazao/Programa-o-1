#include <stdio.h>

void ImprimirMatriz(int matriz[][10])
{
    int i, j;
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matriz[10][10];
    int i, j;
    int temp;

    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            matriz[i][j] = i*10 + j + 1;
        }
    }
    ImprimirMatriz(matriz);
    printf("\n\n");


    // ! TROCAR LINHA 2 -> 8
    for(i = 0 ; i < 10; i++)
    {
        temp = matriz[1][i];
        matriz[1][i] = matriz[7][i];
        matriz[7][i] = temp;
    }
    ImprimirMatriz(matriz);
    printf("\n\n");

    // ! TROCAR COLUNA 4 -> 10
    for(i = 0 ; i < 10; i++)
    {
        temp = matriz[i][3];
        matriz[i][3] = matriz[i][9];
        matriz[i][9] = temp;
    }
    ImprimirMatriz(matriz);
    printf("\n\n");

    // ! TROCAR DIAGONAIS
    for(i = 0 ; i < 10; i++)
    {
        temp = matriz[i][i];
        matriz[i][i] = matriz[i][9-i];
        matriz[i][9-i] = temp;
    }
    ImprimirMatriz(matriz);
    return 0;
}
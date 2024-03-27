#include <stdio.h>

void ImprimirCaracteres(int quantidade[], char caracteres[], int tamanho)
{
    int i, j;

    for(i = 0; i < tamanho; i++)
    {
        for(j = 0; j < quantidade[i]; j++)
        {
            printf("%c", caracteres[i]);
        }
        printf("\n");
    }
}

int main()
{
    int tamanho;
    int i;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int quantidade[tamanho];
    char caracteres[tamanho];

    for(i = 0; i < tamanho; i++)
    {
        printf("Digite a quantidade %d: ", i+1);
        scanf("%d", &quantidade[i]);
        printf("Digite o caracter %d: ", i+1);
        scanf(" %c", &caracteres[i]);
    }

    ImprimirCaracteres(quantidade, caracteres, tamanho);

    return 0;
}
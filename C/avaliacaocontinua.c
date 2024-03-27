#include <stdio.h>

void imprimirCaracteres(int numeros[], char caracteres[], int tamanho) {
	int i;
	int j;
    for ( i = 0; i < tamanho; i++) {
        for (j = 0; j < numeros[i]; j++) {
            printf("%c", caracteres[i]);
        }
        printf("\n");
    }
}

int main() {
    int tamanho;
    int i;
    printf("Insira o tamanho dos vetores: ");
    scanf("%d", &tamanho);

    int numeros[tamanho]; // Vetor de números
    char caracteres[tamanho]; // Vetor de caracteres

    for (i = 0; i < tamanho; i++) {
        printf("Insira o numero de vezes que o caracter '%c' deve ser impresso: ", i + 'a');
        scanf("%d", &numeros[i]);

        printf("Insira o caracter da posicao %d: ", i);
        scanf(" %c", &caracteres[i]);
    }

    imprimirCaracteres(numeros, caracteres, tamanho);

    return 0;
}

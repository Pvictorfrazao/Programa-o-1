#include <stdio.h>

float celsius_para_fahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}

int main() {
    FILE *arquivo_entrada, *arquivo_saida;
    char nomeArquivoEntrada[] = "temperaturas_celsius.txt";
    char nomeArquivoSaida[] = "temperaturas_fahrenheit.txt";
    float temp_celsius, temp_fahrenheit;

   
    arquivo_entrada = fopen(nomeArquivoEntrada, "r");
    if (arquivo_entrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

  
    arquivo_saida = fopen(nomeArquivoSaida, "w");
    if (arquivo_saida == NULL) {
        printf("Erro ao abrir o arquivo de saída.\n");
        return 1;
    }

    
    while (fscanf(arquivo_entrada, "%f", &temp_celsius) != EOF) {
        temp_fahrenheit = celsius_para_fahrenheit(temp_celsius);
        fprintf(arquivo_saida, "%.2f\n", temp_fahrenheit);
    }

    
    fclose(arquivo_entrada);
    fclose(arquivo_saida);

    printf("Conversão concluída com sucesso!\n");

    return 0;
}

#include <stdio.h>
#include <math.h>


// calculo de area feito individualmente subsituindo os valores e a soma pode ser feita depois manualmente,
 //sendo a1 o que fica em baixo da integral e b1 a parte que fica em cima 


double funcao1(double x) {
    return  2*x*cos(3*x);
}

//soma de Riemann
double somaRiemannEsquerda(double (*funcao)(double), double a, double b, int n) {
    double dx = (b - a) / n;  
    double soma = 0.0;

    for (int i = 0; i < n; i++) {
        double x = a + i * dx;  
        double altura = funcao(x); 

        soma += altura * dx;
    }

    return soma;
}

int main() {
    double a1 = 0; 
    double b1 = 3*(3,14)/2; 
    int n1 = 1000; 
    
    double resultado1 = somaRiemannEsquerda(funcao1, a1, b1, n1);
    if (resultado1 < 0) {
    	resultado1 = resultado1 * (-1);	
	}
    printf("Resultado: %f\n", resultado1);


    return 0;
}

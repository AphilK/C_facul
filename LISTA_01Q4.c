#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main () {
    //Declaração de variáveis
    float r;
    double a;
    double pi = M_PI;

    //Inserir variáveis da equação
    printf("Diga-me o raio do circulo para calcularmos a area: ");
    scanf("%f", &r);
    a = pow(r, 2)*pi;
    printf("O raio do circulo dado e: %.2f e a sua respectiva area e: %.2f", r, a);
}
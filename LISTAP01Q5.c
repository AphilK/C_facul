#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES

int main () {
    //Declaração de variáveis
    float base, altura;
    double perimetro, area, diagonal;

    //Ler valores de altura e base para utilizar depois
    printf("Insira o valor da base do retangulo: ");
    scanf("%f", &base);
    printf("Agora insira o valor da altura: ");
    scanf("%f", &altura);

    //Agora inserimos nas equações
    perimetro = (2*base) + (2*altura);
    area = base * altura;
    diagonal = sqrt(pow(base,2) + pow(altura,2));

    //Mostramos ao usuário os resultados
    printf("O perimetro do retangulo e: %.2f", perimetro);
    printf("\nA sua area e: %.2f", area);
    printf("\nA sua diagonal e: %.2f", diagonal);
}
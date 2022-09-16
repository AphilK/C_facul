#include <stdio.h>
#include <math.h>

int main () {
    //Declaração de variáveis
    float c, f;

    //Recebe o valor em graus centígrados
    printf("Insira o valor em graus centigrados: ");
    scanf("%f", &c);

    //Converte para Fahrenheit
    f = ((9*c)+160)/5;

    //Exibe ao usuário a conversão
    printf("%.2f graus centigrados equivalem a %.2f fahrenheit", c, f);
}
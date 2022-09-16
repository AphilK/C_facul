#include <stdio.h>
#include <math.h>

int main () {
    //Declarar variáveis
    float lado_a, lado_b, lado_c;
    double area, semi_perimetro;

    //Receber os valores dos lados
    printf("Comprimento do lado a: ");
    scanf("%f", &lado_a);
    printf("Comprimento do lado b: ");
    scanf("%f", &lado_b);
    printf("Comprimento do lado c: ");
    scanf("%f", &lado_c);

    //Aplicar fórmulas
    semi_perimetro = (lado_a + lado_b + lado_c)/2;
    area = sqrt(semi_perimetro*(semi_perimetro-lado_a)*(semi_perimetro-lado_b)*(semi_perimetro-lado_c));

    //Mostrar ao usuário a fórmula da área
    printf("Area do triangulo: %.4f", area);

    return 0;
}
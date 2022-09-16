#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main () {
    //Declaração de variáveis
    float a = 3;
    float b = 7;
    float c = -1;
    float d = 2;
    float e = 5;

    //Cáculos e suas respectivas respostas no terminal
    float h = 2*(b+2)/(4*d)+4-9;
    printf("%.2f\n", h);
    
    float j = sqrt((e*pow(a, 3))/(2*a));
    printf("%.2f\n", j);

    float k = 3/(2+(e/(2+(1/a))));
    printf("%.2f\n", k);

    double m = (pow(c+7, 4)*M_PI)/(b*a);
    printf("%.2f\n", m);

    return 0;
}
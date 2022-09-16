#include <stdio.h>
#include <math.h>

int main () {
    //Declaração de variáveis
    int a, b, c;

    //Recebe os valores
    printf("DIGITE O VALOR DE A: ");
    scanf("%d", &a);
    printf("DIGITE O VALOR DE B: ");
    scanf("%d", &b);

    //Efetuar as devidas trocas
    c = a;
    a = b;
    b = c;

    //Mostra ao usuário que a troca foi um sucesso
    printf("A = %d\nB = %d", a, b);
}
#include <stdio.h>
#include <string.h>

int main() {
    //Declaração de variáveis
    int length;
    char word[50];
    int position;
    int position_real;

    printf("Vamos trabalhar com sequencias ciclicas!\n");
    printf("Insira a palavra/frase com a qual iremos trabalhar: ");
    fgets(word, sizeof(word), stdin);                                 //Recebe a palavra a ser usada
    printf("Agora diga-me a posicao desejada: ");
    scanf("%d", &position);                                           //Recebe a posição da letra a qual irá encontrar                       

    length = strlen(word) - 1;                                        //Definindo o tamanho da string

    if(position <= length) {                                          //Explicação no readme
      position_real = position - 1;
    } else {
        position_real = (position % length)-1;
      }
    
    printf("A letra na dada posicao e: %c", word[position_real]);     //Devolve ao usuário a letra desejada
    return 0;
}
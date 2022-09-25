No programa acima realizaremos cálculos com sequências cíclicas.

Oque são sequências cíclicas ?

    Sequências cíclicas são palavras, ou números que se repetem após uma determinada ordem, como por exemplo:

        SalvadorSalvadorSalvadorSal...
        123412341234123412..

    Podem também ser frases como por exemplo:

        Eu amo biscoito Eu amo biscoito Eu amo biscoito Eu am...

Imaginemos a seguinte sequência cíclica:

    SalvadorSalvadorSalvadorSal...

    Você consegue dizer de cabeça qual a letra na posição 51.671 ?
    Adianto-me e digo que não, mas se souber não precisa da ajuda de um computador.

    Para encontrarmos a letra na dada posição dividimos a posição pelo tamanho da palavra que se repete, no caso de Salvador temos 8.
    E a posição exata da letra será o resto da divisão, então se o resto for 0, então temos que a letra será "S", se o resto for 1 temos a letra "a" e por ai vai...
    Assim temos que o resto da divisão entre 51.671 por 8 é 7, então a letra na posição 51.671 da sequência "SalvadorSalvadorSalvador..." é a letra "0"

Porém quando trabalhamos com strings (sequências de caracteres) em C, nem tudo são flores.
Pois em C strings trabalham como Arrays, ou seja a primeira letra não localiza-se na posição 1, mas localiza-se na posição 0.
Então cabe ao programador orientar ao computador a calcular da forma correta.

"Pegando" então o resto da divisão entre a posição pelo tamanho da palavra e subtraindo 1.

Durante a criação do código, percebi um erro: para números menores que o tamanho da palavra, o cálculo retornava números negativos.
Para contornar isso, criei um bloco de código condicional onde a variável "position_real" a qual dava a real posição da letra desejada, é simplemente a posição dada pelo usuário menos um.
/*Este arquivo foi nomeado com a extensão .h (header==cabeçalho; biblioteca)
Assim, podemos criar algumas funções e/ou estruturas compartilhadas
que poderão ser utilizadas por diversos programas.
Todas as vezes em que esta biblioteca for utilizada,é importante realizar 
a sua inclusão no código que irá utilizá-la; */

#include <stdio.h>
#include <stdlib.h>

//todas as funções deverão ser escritas antes do "void main()"

void separador(){

    for (int i = 0; i <= 100; i++){ //laço de repetição FOR
        printf("-");
    }

}

void pularLinha(int qtdLinhas){

    for (int i = 1; i <= qtdLinhas; i++){ //laço de repetição FOR
        printf("\n");
    }    

}
//Programa para trabalhar com funções. 
//Vamos utilizar funções com retorno, sem retorno, com argumentos (parâmetros) e sem argumentos.

#include <stdio.h>
#include <stdlib.h>

//todas as funções deverão ser escritas antes do "void main()"

void separadorHT(){

    for (int i = 0; i <= 50; i++){ //laço de repetição FOR
        printf("#");
    }

}

void separadorLinha(){ 

    for (int i = 0; i <= 50; i++){ //laço de repetição FOR
        printf("-");
    }

}

void pularLinha (int qtdLinhas){

    for (int i = 1; i <= qtdLinhas; i++){ //laço de repetição FOR
        printf("\n");
    }    

}

char* comparar (int v1, int v2){

    if (v1 > v2){
        return "O primeiro número digitado é maior que o segundo!\n";
    }
    else if (v1 < v2){
        return "O segundo número digitado é maior que o primeiro!\n";
    }
    else{
        return "O primeiro número é igual ao segundo...\n";
    }
}

//inicio do programa

void main(){

    int n1, n2;

    //limpar a tela
    system("clear"); 

    //chamar funções: pularLinha
    pularLinha(1);

    //chamar funções: separadorHT
    separadorHT();
    pularLinha(1);

        printf("\n\t  PROGRAMA QUE EXIBE UMA MENSAGEM: \n");
        
        printf("\n\t\t  MENSAGEM KKKKK\n");    

    pularLinha(1);

    //chamar funções: separadorLinha
    separadorLinha();

    //chamar funções: pularLinha
    pularLinha(2);

    printf("Digite um número: ");
    scanf("%d", &n1);
    printf("Digite outro número: ");
    scanf("%d", &n2);       

    pularLinha(1);
    separadorLinha();
    pularLinha(1);

         printf("\nRESULTADO: ");

    pularLinha(1); 
        printf(comparar(n1,n2));
    pularLinha(1);    

    separadorHT();
    pularLinha(3);

}
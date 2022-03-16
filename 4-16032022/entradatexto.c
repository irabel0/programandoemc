//Programa que pede ao usuário que insira seu nome. Ao inserir, o programa irá alocar a informação na variavel "nome"

#include <stdio.h>

int main(){

    char username[100] = "Nome de usuário";
    printf("\nInsira um nome de usuário e pressione ENTER: \n\n");
    scanf("%s", username);

    printf("\nNome inserido: %s\n\n", username);

    return 0;
    
}
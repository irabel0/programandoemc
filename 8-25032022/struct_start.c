//Programa para pedir informações como nome, e-mail e idade do cliente e armazená-las.

#include <stdio.h>
#include <stdlib.h>

void main(){

    system("clear");

    struct cliente
    {
        char nome[30];
        char email[100];
        int idade;
    }; //para finalizar uma struct, será necessário utilizar ; após a chave

    //criando uma estrutura para alocar todos os dados em um mesmo endereço de memória

    struct cliente novoCliente, *pNovoCliente; //você define qual será a regra da estrutura e dá um nome para ela 
    pNovoCliente = &novoCliente; //assim ela poderá ser "apontada"
    
    printf("Entre com o nome do cliente: \n");
    scanf("%s", &pNovoCliente->nome); //utilizamos um ponteiro para armazenar os dados na mesma variavel "struct-cliente"

    printf("Entre com o e-mail do cliente: \n");
    scanf("%s", &pNovoCliente->email); //utilizamos um ponteiro para armazenar os dados na mesma variavel "struct-cliente"

    printf("Entre com a idade do cliente: \n");
    scanf("%d", &pNovoCliente->idade); //utilizamos um ponteiro para armazenar os dados na mesma variavel "struct-cliente"

    //---------apresentando os dados-----------------//

    printf("O nome do cliente é: %s\n", pNovoCliente->nome);
    printf("O e-mail do cliente é: %s\n", pNovoCliente->email);
    printf("A idade do cliente é: %d\n", pNovoCliente->idade);
    
}
#include <stdio.h>

int main()

{
//-------------------------------------------------------------------------------//
    float valorProduto, percentualDesconto, valorDesconto, valorFinalProduto;    //
//-------------------------------------------------------------------------------//
    printf("Insira o valor do produto e pressione ENTER: \n");                   //
    scanf("%f", &valorProduto);                                                  //
//-------------------------------------------------------------------------------//
    printf("Insira o percentual de desconto e pressione ENTER: \n");             //     
    scanf("%f", &percentualDesconto);                                            //
//-------------------------------------------------------------------------------//
    valorDesconto = valorProduto / 100 * percentualDesconto;                     //
    printf("Valor do desconto: %f\n", valorDesconto);                            //
//-------------------------------------------------------------------------------//
    valorFinalProduto = valorProduto - valorDesconto;                            //
    printf("Preco final do produto: %f\n", valorFinalProduto);                   //
//-------------------------------------------------------------------------------//
    return 0;                                                                    //
//-------------------------------------------------------------------------------//
}
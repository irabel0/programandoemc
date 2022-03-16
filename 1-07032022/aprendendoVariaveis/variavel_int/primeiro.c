//----------------------------------------------------------------------//
//                         Função do programa:                          //
//    Adquirir uma informação digitada e confirmá-la posteriormente     //
//----------------------------------------------------------------------//

#include <stdio.h>

    int main()                                                       //Comando que não se altera, não é variável//
                                                          
    {
        int j;                                                       //Variável declarada (int), nomeada como j (minúsculo)
        printf("Digite um valor inteiro e pressione ENTER \n");      //Comando de leitura dos números digitados
        scanf("%d", &j);                                             //%d = Acumula o número digitado (decimal); & = endereço da variável
        printf("Valor informado: %d\n", j);                          //Apresenta o valor digitado anteriormente na tela
        return 0;                                                    //Finaliza o código, está pronto para ser executado
            
       }
//----------------------------------------------------------------------//
//                         Função do programa:                          //
//    Adquirir uma informação digitada e confirmá-la posteriormente     //
//----------------------------------------------------------------------//

#include <stdio.h>

    int main()                                                                  //Comando que não se altera, não é variável//
                                                          
        {
            long j;                                                             //Variável declarada (int), nomeada como j (minúsculo)
            printf("Digite um valor inteiro e pressione ENTER \n");             //Comando de leitura dos números digitados
            scanf("%ld", &j);                                                   //%d = Acumula o número digitado; &j = aloca na memória
            printf("Valor informado: %ld\n", j);                                //Apresenta o valor digitado anteriormente na tela
            return 0;                                                           //Finaliza o código, está pronto para ser executado
            
    }
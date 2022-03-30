//Programa para criar uma biblioteca e utiliza-la em um arquivo final

//Typedef (Tipo de Arquivo)
//Struct (Uma estrutura para criação de dados) 

/* Exemplo:
    typedef struct (um tipo de arquivo usando uma estrutura) nome{
        
    }
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct unidade{

    char localizacao [100];
    char nomedaunidade [60];
    char horariofunc [20];
    char telefonedecntt [20];

}unidade;
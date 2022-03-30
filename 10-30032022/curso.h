//Programa para criar uma biblioteca e utiliza-la em um arquivo final

//Typedef (Tipo de Arquivo)
//Struct (Uma estrutura para criação de dados) 

/* Exemplo:
    typedef struct (um tipo de arquivo usando uma estrutura) nome{
        
    }
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct curso{

    char nomedocurso [30];
    char descricao [400];
    char cargahoraria [15];
    char datainicio [15];
    char datatermino [15];
    char precodocurso [10];

}curso;
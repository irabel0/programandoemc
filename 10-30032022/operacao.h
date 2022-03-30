//Programa incluindo as bibliotecas criadas em .h (curso.h e unidade.h)

#include <stdio.h>
#include <stdlib.h>
#include "curso.h"
#include "unidade.h"

void gravar(){


    FILE *arquivo; //esse comando cria um arquivo de texto usando ponteiro

    arquivo = fopen("informacoes.txt","w");  //fopen usado para abertura do arquivo (file)

    
    if(arquivo==NULL){ //if sera usado caso o arquivo não exista, ou seja, não é encontrado (arquivo==null) NULL de nulo
        printf("Arquivo não encontrado ou não existe");
        exit(1); //caso o arquivo nao seja encontrado o comando EXIT fechara o programa
    }

    curso cur, *pcur;
    unidade unid, *punid;

    pcur = &cur;
    punid = &unid;

    //FGETS é para a captura de texto do tipo CHAR, apenas CHAR, ele captura tudo que é digitado
    //incluindo caracteres

    printf("Entre com o nome do Curso: ");
    fgets(pcur->nomedocurso,100,stdin);

    printf("Descrição do Curso: ");
   fgets(pcur->descricao,100,stdin);

    printf("Carga Horaria do Curso: ");
    fgets(pcur->cargahoraria,100,stdin);

    printf("Data de inicio do curso: ");
    fgets(pcur->datainicio,100,stdin);

    printf("Data de término do curso: ");
    fgets(pcur->datatermino,100,stdin);

    printf("Endereço da Unidade: ");
    fgets(punid->localizacao,100,stdin);

    printf("Nome da Unidade: ");   
    fgets(punid->nomedaunidade ,60,stdin);

    printf("Horário de Funcionamento: ");
    fgets(punid->horariofunc,50,stdin);

    printf("Telefone de Contato: ");
    fgets(punid->telefonedecntt,40,stdin);


//o F do printf é usado para imprimir as informações do FILE criado na linha 11

    fprintf(arquivo, pcur->nomedocurso);
    fprintf(arquivo, pcur->descricao);
    fprintf(arquivo, pcur->cargahoraria);
    fprintf(arquivo, pcur->datainicio);
    fprintf(arquivo, pcur->datatermino);
    fprintf(arquivo, pcur->precodocurso);
    fprintf(arquivo, punid->localizacao);
    fprintf(arquivo, punid->nomedaunidade);
    fprintf(arquivo, punid->horariofunc);
    fprintf(arquivo, punid->telefonedecntt);
}
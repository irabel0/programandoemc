//Programa que após inserir o nome de um cargo, ele exibirá o salário deste mesmo cargo

#include <stdio.h>

int main(){

    char cargos[20];
    printf("\nInsira o nome do cargo para visualizar o salário (Pressione ENTER):\n\n");
    scanf("%s", cargos);

    if (strcmp(cargos == "diretor")==0){
        printf("\nSalário de Diretor: R$ 15.000,00\n\n");
    }
    else if (strcmp(cargos == "gerente")==0){
        printf("\nSalário de Gerente: R$ 12.000,00\n\n");
    }
    else if (strcmp(cargos == "analista")==0){
        printf("\nSalário de Analista: R$ 8.000,00\n\n");
    }
    else if (strcmp(cargos == "assistente")==0){
        printf("\nSalário de Assistente: R$ 4.000,00\n\n");
    }
    else if (strcmp(cargos == "auxiliar")==0){
        printf("\nSalário de Auxiliar: R$ 2.000,00\n\n");
    }
    else{
        printf("\nNão há salário!\n\n");
    }

    return 0;

}
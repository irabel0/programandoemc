//Programa que após inserir o nome de um cargo, ele exibirá o salário deste mesmo cargo

#include <stdio.h>

#define c1 diretor
#define c2 gerente
#define c3 analista
#define c4 assistente
#define c5 auxiliar

int main(){

    char cargos[20], c1[20], c2[20], c3[20], c4[20], c5[20]= "Nome do Cargo";
    printf("\nInsira o nome do cargo para visualizar o salário (Pressione ENTER):\n\n");
    scanf("%s", cargos);

    if (cargos == c1){
        printf("\nSalário de Diretor: R$ 15.000,00\n\n");
    }
    else if (cargos == c2){
        printf("\nSalário de Gerente: R$ 12.000,00\n\n");
    }
    else if (cargos == c3){
        printf("\nSalário de Analista: R$ 8.000,00\n\n");
    }
    else if (cargos == c4){
        printf("\nSalário de Assistente: R$ 4.000,00\n\n");
    }
    else if (cargos == c5){
        printf("\nSalário de Auxiliar: R$ 2.000,00\n\n");
    }
    else{
        printf("\nNão há salário!\n\n");
    }
    
    return 0;

}
//Programa para exibir o salário do cargo, de acordo com a escolha do usuário

#include <stdio.h>

int main(){

    int opcao = 0;
    system("clear");
    printf("#############################################");
    printf("\n#\tPrograma para exibir salário\t   #\n");
    printf("#############################################");
    printf("\nEscolha um cargo e pressione ENTER: \n\n");
    printf("1 - Diretor\n2 - Gerente\n3 - Analista\n4 - Assistente\n5 - Auxiliar\n\n");
    printf("Opção selecionada: ");
    scanf("%d", &opcao);
    getchar();

    if (opcao > 5){
        printf("\nCargo não disponível!\n\n");
    }

    else{
        
    switch (opcao)
    {
    case 1:
        printf("\nSalário de Diretor: R$ 15.000,00\n\n");
        break;
    case 2:
        printf("\nSalário de Gerente: R$ 12.000,00\n\n");
        break;
    case 3:
        printf("\nSalário de Analista: R$ 8.000,00\n\n");
        break;
    case 4:
        printf("\nSalário de Assistente: R$ 4.000,00\n\n");
        break;
    case 5:
        printf("\nSalário de Auxiliar: R$ 2.000,00\n\n");
        break;
    }
    }
    

    return 0;
}
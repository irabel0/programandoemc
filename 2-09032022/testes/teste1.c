#include <stdio.h>

int main()
    
{
    char A;
    
        printf("\nVamos calcular velocidades?\n");
        printf("\nDigite o numero da opcao desejada e pressione ENTER: \n");
        printf("\n1. Operar em km/h\n");
        printf("2. Operar com m/s\n\n");
        scanf("%c", &A);               

    if(A == '1')
    {
        int velMedia1, distKm, tempH;
        printf("\nVamos calcular velocidade media com os dados: km/h\n");

        printf("Quantos quilometros ele percorreu? (digite e pressione ENTER)\n\n");                                              
        scanf("%d", &distKm);

        printf("Percorreu %d quilometros em quantas horas? (digite e pressione ENTER)\n\n", distKm);                                                          
        scanf("%d", &tempH);

        velMedia1 = distKm / tempH;  

        printf("Velocidade Media do Objeto: %d km/h\n", velMedia1); 
    }

    else
    {   
        int velMedia2, velMedia3, distM, tempS;
        printf("\nVamos calcular velocidade media com os dados: m/s\n");

        printf("Quantos metros ele percorreu? (digite e pressione ENTER)\n\n");                                                    
        scanf("%d", &distM);

        printf("Percorreu %d metros em quantos segundos? (digite e pressione ENTER)\n\n", distM);                                                     
        scanf("%d", &tempS); 

        velMedia2 = (distM / tempS);
        
        printf("Velocidade Media do Objeto: %d m/s\n", velMedia2);
    }
    
return 0;

}
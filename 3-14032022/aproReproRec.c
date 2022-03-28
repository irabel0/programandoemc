//Programa para tomada de decisão, definimos as médias para aluno aprovado e reprovado utilizando float, if, else if & else

#include <stdio.h>
#define mediaApr 7.0
#define mediaRec 4.0

    int main()
    {
        float na; //definimos a variavel float devido aos números com vírgula
                
        printf("Insira a nota do aluno: \n");
        scanf("%f", &na);

        if (na >= mediaApr){    //Se o valor inserido na variável for maior ou igual que a média para aprovação, então "printf"
            printf("Aluno aprovado!\n");    //O aluno será aprovado...
        }
        
        else if (na <= mediaRec){   //Senão, se o valor inserido na variável for menor ou igual que a média para recuperação, então "printf"
            printf("Aluno reprovado!\n");   //O aluno será reprovado...
        }

        else{   //Senão, o aluno estará em recuperação.
            printf("Aluno em recuperação!\n");  
        }

        return 0;    
    }
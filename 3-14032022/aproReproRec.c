#include <stdio.h>
#define mediaApr 7.0
#define mediaRec 4.0

    int main()
    {
        float na;
                
        printf("Insira a nota do aluno: \n");
        scanf("%f", &na);

        if (na >= mediaApr){
            printf("Aluno aprovado!\n");
        }
        
        else if (na <= mediaRec){
            printf("Aluno reprovado!\n");
        }

        else{
            printf("Aluno em recuperação!\n");
        }

        return 0;    
    }
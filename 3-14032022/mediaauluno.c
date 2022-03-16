#include <stdio.h>

int main()
{
    float media, nota;
    media = 7;

    printf("Qual a nota do aluno?\n");
    scanf("%f", &nota);

        if (nota >= media)
        {
            printf("O aluno foi aprovado!\n");
        }
        else
        {
            printf("O aluno foi reprovado!\n");            
        }

    return 0;

}
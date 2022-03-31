#include <stdio.h>
#include <stdlib.h>

void soma(int array[], int tamanho){

    system("clear");

    int rs = 0;

    for (int i = 0; i < tamanho; i++){

        rs += array[i];
        
    }

    printf("A soma dos elementos é %d\n", rs);

    printf("\n");
}

void maiorValor(int array[], int tamanho){

    int m = array[0];

    for (int i = 1; i < tamanho; i++){
        
        if(array[i] > m){ //para saber o menor, altera o sinal para <

            m = array[i];

        }
        
    }

    printf("O maior valor é %d\n", m);

    printf("\n");

}

void ordenacao(int valores[], int tamanho){

    for (int w = 1; w < tamanho; w++){

        int z = valores[w];
        int y;

        for (y = w-1; y >= 0 && valores[y] > z; y--){

            valores[y + 1] = valores[y];
            
        }

        valores [y + 1] = z;

    }

    printf("Números em ordem Crescente: ");

    for(int p = 0; p < tamanho; p++){
     
        printf("%d;",valores[p]);
    }

    printf("\n\n");

}
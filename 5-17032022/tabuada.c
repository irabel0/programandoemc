#include <stdio.h>

int main(){

    int x, y, resultado;
    system("clear");
    printf("Vamos aprender a tabuada?\n\n");
    printf("Entre com o operador e pressione ENTER: ");
    scanf("%d", &x);
    
    printf("\nTabuada do %d\n\n", x);  

    for (y = 0; y <= 10; y++){
        resultado = x*y;        
        printf("%d x %d = %d\n", x, y, resultado);
    }

return 0;

}
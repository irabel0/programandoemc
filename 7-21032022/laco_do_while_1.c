#include <stdio.h>

int main(){

    int a = 0;
    
    do{

       if (a % 2 == 0){
           printf("O número %d é par\n", a);
       }
       a++;

    } 

    while (a <= 50);
}
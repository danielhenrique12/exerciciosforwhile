#include <stdio.h>
    int main(){
        int n, soma=0, i=0;

        printf("Qual numero voce deseja encontrar o quadrado? ");
        scanf("%d", &n);

        while(i <= 2*n){
            if(i % 2 == 1){
                soma+=i;
            }
            i++;
        }
        printf("\nO quadrado de %d e %d", n, soma);
    }
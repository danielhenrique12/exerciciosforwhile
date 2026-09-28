#include <stdio.h>
    int main(){
        int n, soma=0, div=1;
        
        printf("Digite o numero: ");
        scanf("%d", &n);

        while(div<n){
            if(n % div == 0){
                soma += div;
            }
            div++;
            }
            printf("\nA soma dos divisores de %d e: %d", n, soma);
    }
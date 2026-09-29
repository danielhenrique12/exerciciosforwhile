#include <stdio.h>
    int main(){
        int n, div=1, soma = 0;

        printf("Digite um numero: ");
        scanf("%d", &n);

        while (div<n){
            if(n % div == 0){
            soma += div;
            }
            div++;
        }
            printf("%d\n", soma);
} 
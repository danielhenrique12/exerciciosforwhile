#include <stdio.h>
    int main(){
        int n, soma=0, div;

        printf("Digite o numero: ");
        scanf("%d", &n);

        for(int div = 1; div<=n; div++){
            if(n % div == 0){
                soma += div;
            }
        }
        printf("\nA soma dos divisores e %d", soma);
    }
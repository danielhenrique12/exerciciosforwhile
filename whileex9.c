#include <stdio.h>
    int main(){
        int n, soma=0;

        printf("Digite um numero: ");
        scanf("%d", &n);

        while(n!=0){
            soma+=n;
            printf("Digite outro numero ou 0 para encerrar: ");
            scanf("%d", &n);
        }
        printf("\nPrograma encerrado, a soma dos numeros e: %d", soma);
    }
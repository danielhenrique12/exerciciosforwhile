#include <stdio.h>
    int main(){
        int i=1, n, soma=0;

            printf("Digite um numero: ");
            scanf("%d", &n);

            while(i<=n){
                soma+=i;
                i++;
            }
        printf("A soma dos numeros anteriores + o seu numero e: %d", soma);
    }
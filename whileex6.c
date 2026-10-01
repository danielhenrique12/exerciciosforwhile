#include <stdio.h>
    int main(){
        int n, maior, cont=1;

        printf("Digite um numero: ");
        scanf("%d", &maior);

        while (cont<5){
            printf("\nDigite um numero: ");
            scanf("%d", &n);
        if(n>maior){
            maior=n;
        }
        cont++;
    }
    printf("O maior numero e %d", maior);
}
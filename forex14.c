#include <stdio.h>
    int main(){
        int n, mult=1;

        for(int i = 1; i <= 3; i++){
            printf("Digite o numero inteiro: ");
            scanf("%d", &n);
            mult*=n;
        }
        printf("O resultado da multiplicacao entre esses numeros e: %d", mult);
    }
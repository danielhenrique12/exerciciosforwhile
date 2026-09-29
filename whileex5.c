#include <stdio.h>
    int main(){
        int n, div=1, uni=1;

        printf("Digite um numero: ");
        scanf("%d", &n);

        while (n>0){
            div = n % 10;
            n = n / 10;
            printf("\n%d", div);
        }

} 
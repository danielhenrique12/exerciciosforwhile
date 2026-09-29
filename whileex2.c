#include <stdio.h>
    int main(){
        int n, qtd=0;

        printf("Digite um numero: ");
        scanf("%d", &n);

        while (n > 0) {
            n = n / 10;
            qtd ++;
        }
        printf("%d\n", qtd);
}
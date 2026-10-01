#include <stdio.h>

int main() {
    int n, cont, soma=0;
    float media;
    
        for(int cont=0; cont<5; cont++){
            printf("Digite um numero: ");
            scanf("%d", &n);
            soma += n;
        }
        media = soma / 5;
        printf("%.2f", media);
}
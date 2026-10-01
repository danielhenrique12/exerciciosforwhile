#include <stdio.h>
    int main(){
        int n, i;

        while(n!=0){
            printf("Digite um numero ou 0 para encerrar. \n");
            scanf("%d", &n);
            i++;
        }
        printf("Programa encerrado.");
    }
#include <stdio.h>
    int main(){
        int n, peso, nota, somap=0;
        float media, soman=0;

        printf("Quantas notas serao? ");
        scanf("%d", &n);

        for(int i=1; i <= n; i++){
            printf("\nDigite a nota e seu peso: ");
            scanf("%d, %d", &nota, &peso);
            soman+=nota * peso;
            somap+=peso;
        }
        media = soman / somap;
        printf("\nA sua media ponderada e: %.2f", media);
    }
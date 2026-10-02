#include <stdio.h>
    int main(){

        int n, i=1, soma=0;

        printf("Verifique se o numero e primo, digite a seguir: ");
        scanf("%d", &n);

        while(i<n){
            if(n % i == 0){
            soma+=i;
            }
            i++;
        }
        if(soma == 1){
            printf("\nO numero e primo. ");
        }
        else
            printf("\nO numero nao e primo. ");
    }
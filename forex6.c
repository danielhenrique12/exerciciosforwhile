#include <stdio.h>

int main() {
    int n, div, soma=0;
        printf("Digite o numero: ");
        scanf("%d", &n);
    
        for(int div=1; div<n; div++){
            if(n % div == 0){
                soma += div;
        }
        }
        printf("%d", soma);
}
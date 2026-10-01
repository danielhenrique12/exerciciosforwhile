#include <stdio.h>
    int main(){
        int n, sub;

        printf("Digite o numero: ");
        scanf("%d", &n);

        for(sub=n; sub>=1; sub--){
            printf("\n%d", sub);
        }
    }
#include <stdio.h>
    int main() {
        int n, mult;

        printf("Digite o numero: ");
        scanf("%d", &n);

        for(int i=1; i<=n; i++){
            if(i % 3 == 0){
                printf("\n%d", i);
            }
        }
    }
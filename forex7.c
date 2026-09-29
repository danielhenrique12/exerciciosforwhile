#include <stdio.h>

int main() {
    int n, fat, mult=1;
        printf("Digite o numero: ");
        scanf("%d", &n);
    
        for(int fat=1; fat<=n; fat++){
            mult *= fat;
        }
        printf("%d", mult);
}
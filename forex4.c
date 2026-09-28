#include <stdio.h>

int main() {
    int n, mult;
    printf("Digite o numero: ");
    scanf("%d", &n);

    for(int i=1; i<=10; i++){
        mult = n*i;
        printf("\n%d x %d = %d", i, n, mult);
    }
}
#include <stdio.h> //numero invertido //
    int main(){
        int n, uni, saida = 0;

        printf("Digite um numero: ");
        scanf("%d", &n);

        while (n > 0) {
            uni = n % 10;
            saida = saida * 10 + uni;
            n = n / 10;
        }
        printf("%d\n", saida);
}

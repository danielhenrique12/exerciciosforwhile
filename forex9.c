#include <stdio.h>
    int main(){
        int n, soma=0, mult;

        printf("Digite o numero: ");
        scanf("%d", &n);

        for(mult=1; mult<=n; mult++){
            if(mult % 3 == 0){
                printf("\n%d", mult);
            }
        }
    }
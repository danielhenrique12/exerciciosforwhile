#include <stdio.h>
    int main(){
        int senha;

        printf("Digite a senha: ");
        scanf("%d", &senha);

        while(senha!=12345678){
            printf("\nSenha incorreta, tente novamente: \n");
            scanf("%d", &senha);
        }
        printf("Senha correta, seja bem vindo!");
    }
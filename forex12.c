#include <stdio.h>
    int main(){
        int cont, dez=0, acima=0, rec=0, zero=0, rep=0;
        float nota;
    
        for(int cont=1; cont<10; cont++){
            printf("\nDigite a nota do aluno %d: ", cont);
            scanf("%f", &nota);
            if(nota==10){
                dez++;
                acima++;
                printf("\nAprovado.");
            }
            else if(nota>=7){
                acima++;
                printf("\nAprovado.");
            }
            else if(nota>=5 && nota<7){
                rec++;
                printf("\nRecuperacao.");
            }
            else if(nota==0){
                zero++;
                rep++;
                printf("\nReprovado.");
            }
            else{
                rep++;
                printf("\nReprovado.");
            }
        }  
            printf("\nAlunos aprovados: %d \nAlunos reprovados: %d \nAlunos de recuperacao: %d \nAlunos com nota maxima: %d \nAlunos com nota zero: %d", acima, rep, rec, dez, zero);
    }        
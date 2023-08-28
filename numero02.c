#include <stdio.h>

main(){
    int A, B, C, D;

    printf("Digite o primeiro numero: ");
    scanf("%d", &A);

    printf("\nDigite o segundo numero: ");
    scanf("%d", &B);

    printf("\nDigite o terceiro numero: ");
    scanf("%d", &C);

    printf("\nDigite o quarto numero: ");
    scanf("%d", &D);

    if(A > B && A > C && A > D){
        printf("\nO maior numero é: %d", A);
        if(B < C && B < D){
        printf("\nO numero menor é: %d", B);
        }else if (C < D){
        printf("\nO numero menor é: %d", C);
        }else{
        printf("\nO numero menor é: %d", D);
        }
    }
    else if (B > A && B > C && B > D){
        printf("\nO numero maior é: %d", B);
        if(A < C && A < D){
        printf("\nO numero menor é: %d", A);
        }else if (C < D){
        printf("\nO numero menor é: %d", C);
        }else{
        printf("\nO numero menor é: %d", D);
        }
    }
    else if (C > A && C > B && C > D){
        printf("\nO numero maior é: %d", C);
        if(A < B && A < D){
        printf("\nO numero menor é: %d", A);
        }else if (B < D){
        printf("\nO numero menor é: %d", B);
        }else{
        printf("\nO numero menor é: %d", D);
        }
    }
    else if (D > A && D > B && D > C){
        printf("\nO numero maior é: %d", D);
        if(A < C && A < B){
        printf("\nO numero menor é: %d", A);
        }else if (B < C){
        printf("\nO numero menor é: %d", B);
        }else{
        printf("\nO numero menor é: %d", C);
        }
    }
}
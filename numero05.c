#include <stdio.h>

main(){
    int numero;

    printf("Digite um número qualquer: \n");
    scanf("%d", &numero);

    if(numero == 5){
        printf("O número digitado é 5");
    }
        else if(numero == 200){
        printf("O número digitado é 200");
        }
        else if(numero == 400){
            printf("O número digitado é 400");
        }
            else if(numero >= 500 && numero <= 1000){
            printf("O número está no intervalo entre 500 e 1000");
            }
            else{
                printf("Número fora dos escopos");

    }
}
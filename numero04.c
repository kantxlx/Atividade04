#include <stdio.h>

main(){
    int valor01, valor02, valor03;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor01);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor02);

    printf("Digite o terceiro valor: ");
    scanf("%d", &valor03);

    if(valor01 <= valor02 && valor01 <= valor03){
        if(valor02 <= valor03){
        printf("Os numeros em ordem descendente: %d %d %d\n", valor03, valor02, valor01);
        }else{
        printf("Os numeros em ordem descendente: %d %d %d\n", valor02, valor03, valor01);
        }
    }

    else if(valor02 <= valor01 && valor02 <= valor03){
        if(valor01 <= valor03){
        printf("Os numeros em ordem descendente: %d %d %d\n", valor03, valor01, valor02);
        }else{
        printf("Os numeros em ordem descendente: %d %d %d\n", valor01, valor03, valor02);
        }
    }
        
    else{
        if(valor01 <= valor02) {
        printf("Os numeros em ordem descendente: %d %d %d\n", valor02, valor01, valor03);
        }else{
        printf("Os numeros em ordem descendente: %d %d %d\n", valor01, valor02, valor03);
        }
  }
}
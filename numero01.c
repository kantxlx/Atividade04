#include <stdio.h>
#include <math.h>

main(){
  
  float numero, raiz, quadrado;
  
  printf("Digite o numero: ");
  scanf("%f", &numero);

  if(numero >= 0){
    raiz = sqrt(numero);
    printf("\nA raiz quadrada é: %.2f", raiz);
  }
  else {
    quadrado = pow(numero, 2);
    printf("\nO quadrado é: %.2f", quadrado);
  }
  
}
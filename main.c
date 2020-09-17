#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
  
  int numero,escolha_par_impar ,numero_computador,soma;
  
  printf("Digite 0 para par ou  1 para impar :");
  scanf("%d",&escolha_par_impar);

  printf("Digite o seu numero :");
  scanf("%d",&numero);
  
  srand(time(NULL));
  numero_computador= rand() % 10;
  
  
  //printf("O computador escolheu o nº %d\n",numero_computador);
  //soma = numero + numero_computador;

  if ((numero+numero_computador )% 2 ==escolha_par_impar)
  { 
    printf("computador = %d | vou roubar.. ahahah\n",numero_computador);
    numero_computador =numero_computador +1 ;
  }
  printf("O computador escolheu o nº %d\n",numero_computador);
  soma = numero + numero_computador;

  if(soma % 2 == escolha_par_impar)
  printf("Voce ganhou\n");

  else
  printf("O COMPUTADOR GANHOU!\n");


  
  return 0;
}
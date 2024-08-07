#include <stdio.h>
#include <stdlib.h>

int main()
{
  char nome[50] = "";
  float n1 = 0;
  float n2 = 0;
  float soma = 0;
//
  printf("Qual o seu nome? \n");
  scanf("%s.\n", nome);
  printf("Iremos realizar a soma de dois numeros: \n");
  printf("Digite o primeiro numero : ");
  scanf("%f. \n", &n1);
  printf("Digite o segundo numero : ");
  scanf("%f. \n", &n2);
  //
  soma = n1 + n2;
  //
  printf("%s, soma desses dois numeros e de %.2f ",nome , soma);
  system("pause");
  return 0;
}

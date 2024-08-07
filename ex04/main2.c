#include <stdio.h>
#include <stdlib.h>

int main()
{
  char nome[50] = "";
  int anoatu = 0;
  int anonasc = 0;
  int idade = 0;
  printf("Ola rapaz, primeiramente nos informe qual o seu nome : ");
  scanf("%s.", nome);
  printf("Iremos saber a sua idade de acordo com o seu ano de nascimento.\n");
  printf("Primeiro nos informe em que nos nos estamos: \n");
  scanf("%d.", &anoatu);
  printf("Agora nos informe o ano que voce nasceu. \n");
  scanf("%d.", &anonasc);

  system("cls");

  idade = anoatu - anonasc;
  printf("NOME : %s.\n", nome);
  printf("ANO DE NASCIMENTO : %d. \n", anonasc);
  printf("IDADE : %d.\n", idade);
  system("pause");
  return 0;
}

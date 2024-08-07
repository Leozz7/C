#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//
int main()
{
  int n[5];
  int soma;
  //
  for (int i = 0; i < 5; i++)
  {
    printf("Insira um dado : ");
    scanf("%d. \n", &n[i]);
    soma = soma + n[i];
  }
  system("cls");
  printf("DADOS INSERIDOS : \n");
  for (int i = 0; i < 5; i++)
  {
    printf("%d .. ", n[i]);
  }

  system("pause");

  return 0;
}

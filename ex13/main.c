#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//
int main()
{
  char nome[50];
  int alunos, nota;
  //
  printf("ESCOLA DO LELEO \n");
  printf("-----------------\n");
  printf("Quantos alunos tem na sala : ");
  scanf("%d", &alunos);
  for (int i = 0; i <= alunos; i++)
  {
    system("cls");
    printf("ESCOLA DO LELEO \n");
    printf("-----------------\n");
    printf("NOME : ");
    scanf("%s \n", nome);
    printf("NOTA : ");
    scanf("%d \n", &nota);
  }

system("pause");

  return 0;
}

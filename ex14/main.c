#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//
int main()
{
  int alunos;
  char nome[50];
  float nota;
  float manota = 0;
  //
  printf("ARMAZENADOR DE NOTAS\n");
  printf("-------------------------\n");
  printf("Quantos alunos tem na sala : ");
  scanf("%d", &alunos);
  for (int i = 0; i <= alunos; i++)
  {
    system("cls");
    printf("ARMAZENADOR DE NOTAS\n");
    printf("-------------------------\n");
    printf("NOME : ");
    scanf("%s. \n", nome);
    printf("NOTA : ");
    scanf("%f", &nota);
    if (nota > manota)
    {
      manota = nota + 0;
    }
  }
  printf("A maior nota da sala foi %.1f", manota);

  system("pause");

  return 0;
}

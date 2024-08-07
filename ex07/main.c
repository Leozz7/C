#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//
int main()
{
  // var
  char nome[50] = "";
  float n1 = 0;
  float n2 = 0;
  float media = 0;

  // quetions
  printf("NOME : ");
  scanf("%s.\n", nome);
  printf("NOTA 1 : ");
  scanf("%f.\n", &n1);
  printf("NOTA 2 : ");
  scanf("%f.\n", &n2);
  media = (n1 + n2) / 2;
  printf("------------------- \n");

  // if and else
  if (media >= 6)
  {
    printf("Aluno : %s.\n", nome);
    printf("MEDIA : %.1f \n", media);
    printf("Aprovado(a) \n");
  }
  else if (media < 6)
  {
    printf("Aluno : %s.\n", nome);
    printf("MEDIA : %.1f \n", media);
    printf("Reprovado(a) \n");
  }
  printf("-------------------");

  system("pause");

  return 0;
}

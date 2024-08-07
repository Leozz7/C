#include <stdio.h>
#include <stdlib.h>
//
int main()
{
  //
  char nome[50] = "";
  float n1 = 0;
  float n2 = 0;
  float media = 0;
  //
  printf("-------------------\n");
  printf("NOTA FINAL\n");
  printf("-------------------\n");
  printf("NOME : ");
  scanf("%s.\n", nome);
  printf("NOTA 1 :");
  scanf("%f.\n", &n1);
  printf("NOTA 2 : ");
  scanf("%f.\n", &n2);
  //
  media = (n1 + n2) / 2;
  //
  if (media >= 6)
  {
    printf("---------------------\n");
    printf("NOME : %s\n", nome);
    printf("MEDIA : %.1f\n", media);
    printf("SITUACAO : APROVADO(A)\n");
    printf("---------------------\n");
  }
  //
  if (media >= 3.5 && media < 6)
  {
    printf("---------------------\n");
    printf("NOME : %s\n", nome);
    printf("MEDIA : %.1f\n", media);
    printf("SITUACAO : PARALELA\n");
    printf("---------------------\n");
  }
  //
  else if (media < 3.5)
  {
    printf("---------------------\n");
    printf("NOME : %s\n", nome);
    printf("MEDIA : %.1f\n", media);
    printf("SITUACAO : REPROVADO(A)\n");
    printf("---------------------\n");
  }

  system("pause");
  //
  return 0;
}

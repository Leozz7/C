#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//
void cabecalho()
{
  printf("FAZENDO UMA MATRIZ 3X3\n");
  printf("---------------------------\n");
}
//
int main()
{
  int i, j;
  int mat[3][3];
  //
  cabecalho();
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; i++)
    {
      printf("Digite um valor para mat[%d][%d] :", i, j);
      scanf("%d. \n", &mat[i][j]);
    }
  }
  system("cls");
  cabecalho();
  for (i = 0; i == 2; i++)
  {
    for (j = 0; j == 2; i++)
    {
      printf("%d", mat[i][j]);
    }
    printf("\n");
  }

system("pause");

  return 0;
}

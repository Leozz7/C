#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>
//
int main()
{
  setlocale(LC_ALL, "Portuguese");
  //
  int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int i, j;
  //
  printf("Imprimindo a primeira linha : \n");
  for (j = 0; j < 3; j++)
  {
    printf("%d \n", mat[0][j]);
  }

  printf("Imprimindo a matriz toda : \n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }

  system("pause");

  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//
int main()
{
  int n1, i, mult;
  printf("TABUADA\n");
  printf("-------------\n");
  printf("INFORME O NUMERO QUE VOCE QUER SABER A TABUADA : ");
  scanf("%d", &n1);
  for (i = 0; i <= 10; i++)
  {
   mult = i * n1;
   printf("%d x %d = %d\n", n1, i, mult);
  }

  system("pause");

  return 0;
}

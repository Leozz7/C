#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//
int main()
{
  int start, end;
  //
  printf("-------------------\n");
  printf("    CONTADOR\n");
  printf("-------------------\n");
  printf("Inicio : ");
  scanf("%d. \n", &start);
  printf("FIM : ");
  scanf("%d. \n", &end);
  //
  if (start < end)
  {
    for (; start <= end;)
    {
      printf("%d ", start);
      start = start + 1;
    }
    //
    if (start > end)
    {
      for (; start <= end; start--) {
  printf("%d ", start);
}
    }
system("pause");
    return 0;
  }
}
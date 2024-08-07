#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//
int main()
{
  int n1, cont, mult;
  //
  printf("TABUADA\n");
  printf("---------------------\n");
  printf("Voce quer saber a tabuada de qual numero :");
  scanf("%d.\n", &n1);
  system("cls");
  //
  printf("TABUADA\n");
  printf("---------------------\n");
//
for (cont = 0 ;cont <= 10; cont++)
{
  mult = cont * n1;
  printf("%d x %d = %d\n\n", n1, cont, mult); 
}

system("pause");

  return 0;
}

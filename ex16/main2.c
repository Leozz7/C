#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//
int main()
{
  char s[15];
  printf("Digite algo : (Leitura pelo gets)\n");
  gets(s);
  fflush(stdin);

  printf("RESULTADO : ");
  puts(s);
  puts("");

  printf("\nDigite Algo : (Leitura pelo fgets)\n");
  fgets(s, 15, stdin);
  fflush(stdin);

  printf("RESULTADO\n");
  puts(s);

  system("pause");

  return 0;
}

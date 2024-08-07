#include <stdio.h>
#include <stdlib.h>

int main()
{
  int dado = 20;
  printf("O dado antes do incremento : %d.", dado);

  dado++;
  printf("Depois do incremento : %d.", dado);

  dado--;
  printf("Dado depois do decrecimo : %d. \n", dado);

  dado += 3;
  printf("Dado depois do incremento de 3 unidades : %d. \n", dado);

  dado -= 2;
  printf("Dado depois do decremento de duas unidades : %d. \n", dado);

  dado *= 10;
  printf("O dado depois de multiplicar por 10 : %d. \n", dado);
  system("pause");
  return 0;
}

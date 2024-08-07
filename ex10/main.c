#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//
int main()
{
  int d;
  //
  printf("--------------------------\n");
  printf("CRIANCA ESPERANCA\n");
  printf("-------------------------\n");
  printf("DIGITE : \n");
  printf("[1] Para doar 10$\n");
  printf("[2] Para doar 30$\n");
  printf("[3] Para doar 50$\n");
  printf("[4] Para doar 100$\n");
  printf("[5] Para sair\n");
  scanf("%d", &d);
  //
  switch (d)
  {
  case 1:
    printf("Obrigado pelos 10$, volte sempre!");
    break;
    //
  case 2:
    //
    printf("Obrigado pelos 30$, volte sempre!");
    break;
    //
  case 3:
    printf("Obrigado pelos 50$, volte sempre!");
    break;
    //
  case 4:
    printf("Obrigado pelos 100$, volte sempre!");
    break;
    //
  case 5:
    printf("Obrigado pela visita, volte sempre!");
    break;
    //
  default:
    break;
  }

  system("pause");
  //
  return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
  char nome[50] = "";
  float alt = 0;
  float peso = 0;
  float IMC = 0;

  // Entrada de Dados //

  printf("Digite o seu nome : \n");
  scanf("%s.\n", nome);
  printf("Digite a sua altura em metros : \n");
  scanf("%f. \n", &alt);
  printf("Digite o seu peso : \n");
  scanf("%f. \n", &peso);

  IMC = peso / (alt * alt);

  // Saída de Dados //

  printf("----------------------------\n");
  printf("|     NOME   : %s.        \n", nome);
  printf("|     ALTURA : %.2f.      \n", alt);
  printf("|     PESO   : %.1f.      \n", peso);
  printf("|     IMC     : %.2f.     \n", IMC);
  printf("----------------------------\n");
  system("pause");
  return 0;
}

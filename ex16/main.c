#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//
int main()
{
  setlocale(LC_ALL, "Portuguese");

  // Váriaveis //
  int alunos;
  float nota, manota;
  char nome[20], manome[20];

  // Quant Alunos //
  printf("MAIOR NOTA DA SALA\n");
  printf("-----------------------\n");
  printf("Quantos alunos tem na sala? ");
  scanf("%d", &alunos);

  // Leitura de Dados //
  for (int i = 1; i <= alunos; i++)
  {
    system("cls");
    printf("MAIOR NOTA DA SALA\n");
    printf("-----------------------\n");
    printf("NOME : ");
    fflush(stdin);
    scanf("%19[^\n]s", nome);
    printf("\nNOTA : ");
    scanf("%f", &nota);

    // Maior nota da sala //
    if (nota > manota)
    {
      manota = nota;
      strcpy(manome, nome);
    }

    // Exibição //
    system("cls");
    printf("MAIOR NOTA DA SALA\n");
    printf("-----------------------\n");
    printf("A maior nota da sala foi de %s com %.1f!", manome, manota);
  }

  system("pause");

  return 0;
}

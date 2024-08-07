//Questao 7

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//
// Leandro Sena
// Matheus Mota
//
void cabecalho()
{
  printf("===============================\n");
  printf("     CADASTRO DE PESSOAS\n");
  printf("===============================\n");
}

void cabecalho2()
{
  printf("===============================\n");
  printf("     PESSOAS CADASTRADAS\n");
  printf("===============================\n");
}
//
struct pessoa
{
  char nome[30][30], email[30][30], cpf[30][30];
};

typedef struct pessoa pessoa;
//
int main()
{
  setlocale(LC_ALL, "Portuguese");
  //
  char conti[5];
  int compara;
  int j = 1;

  pessoa pes = {};
  //
  system("cls");

  cabecalho();
  printf("NOME  : ");
  fflush(stdin);
  gets(pes.nome[0]);

  printf("\nEMAIL : ");
  fflush(stdin);
  gets(pes.email[0]);

  printf("\nCPF   : ");
  fflush(stdin);
  gets(pes.cpf[0]);

  printf("Quer continuar? [S/N]");
  fflush(stdin);
  gets(conti);

  compara = strcmp(conti, "S");

  for (int i = 1; compara == 0; i++)
  {
    system("cls");

    cabecalho();
    printf("NOME  : ");
    fflush(stdin);
    gets(pes.nome[i]);

    printf("\nEMAIL : ");
    fflush(stdin);
    gets(pes.email[i]);

    printf("\nCPF   : ");
    fflush(stdin);
    gets(pes.cpf[i]);

    printf("Quer continuar? [S/N]");
    fflush(stdin);
    gets(conti);

    j++;

    compara = strcmp(conti, "S");
  }

  system("cls");

  cabecalho2();

  for (int t = 0; t < j; t++)
  {
    printf("NOME  : %s\n", pes.nome[t]);
    printf("EMAIL : %s\n", pes.email[t]);
    printf("CPF   : %s\n", pes.cpf[t]);
    printf("---------------------------------\n");
  }

  system("pause");

  return 0;
}
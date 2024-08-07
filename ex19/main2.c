#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>
//
struct pessoa
{
  int idade;
  float peso;
  char nome[20];
};

typedef struct pessoa pessoa;
//
int main()
{
  setlocale(LC_ALL, "Portuguese");
  //
  int pes;
  //
  printf("Quantas pessoa participaram da pesquisa? ");
  scanf("%d.\n", &pes);
  system("cls");
  //
  pessoa lista[pes];

  for (int i = 1; i <= pes; i++)
  {
    printf("Insira os dados da pessoa %d\n", i);
    printf("Digite o nome : ");
    fflush(stdin);
    gets(lista[i].nome);
    printf("Digite a idade : ");
    scanf("%d.\n", &lista[i].idade);
    printf("Digite o Peso : ");
    scanf("%f.\n", &lista[i].peso);
    system("cls");
  }

  for (int i = 1; i <= pes; i++)
  {
    printf("---------PESSOA %d---------\n", i);
    printf("  NOME : %s \n", lista[i].nome);
    printf("  IDADE : %d\n", lista[i].idade);
    printf("  PESO : %.2f\n", lista[i].peso);
    printf("---------------------------\n");
  }

  system("pause");

  return 0;
}

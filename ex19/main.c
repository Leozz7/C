#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
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
  pessoa pes = {0, 0.0, "Teste"};

  //
  printf("Inicio \n");
  printf("pes.idade : %d\n", pes.idade);
  printf("pes.peso : %.2f\n", pes.peso);
  printf("pes.nome : %s\n", pes.nome);

  // Atribuindo Valores //
  pes.idade = 19;
  pes.peso = 68.8;
  strcpy(pes.nome, "Leandro");
  

  printf("\nAlterando os campos via codigos\n");
  printf("pes.idade : %d\n", pes.idade);
  printf("pes.peso : %.2f\n", pes.peso);
  printf("pes.nome : %s\n", pes.nome);

  //Solicitando Via Teclado //

  printf("\nDigite a idade : ");
  scanf("%d\n", &pes.idade);
  printf("Digite o Peso : ");
  scanf("%f\n", &pes.peso);
  printf("Digite o Nome : ");
  fflush(stdin);
  gets(pes.nome);

  printf("pes.idade : %d\n", pes.idade);
  printf("pes.peso : %.2f\n", pes.peso);
  printf("pes.nome : %s\n", pes.nome);

  system("pause");

  return 0;
}

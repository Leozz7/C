#include <stdio.h>

int main()
{
  float peso = 0;
  float alt = 0;
 printf("Iremos realizar o calculo do seu IMC. \n");
 printf("Primeiro nos informe o seu peso em KG: \n");
 scanf("%f", &peso);
 printf("Agora nos informe a sua altura em metros: \n");
 scanf("%f", &alt);
float IMC = peso / (alt*alt) ;
printf("O seu IMC de acordo com os dados informados e de %2f.", IMC);
system("pause");
  return 0;
}

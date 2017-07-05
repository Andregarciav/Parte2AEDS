#include <stdio.h>
#include <stdlib.h>
#define MAX 10
typedef struct pessoa
  {
    char nome[20];
    int idade, peso;
    float altura;
  }INDIVIDUO;

void imprime(int N , INDIVIDUO* imprime)
{
  int i;
  printf("Paciente\nNome\tidade\tpeso\taltura\n");
  for ( i = 0 ; i < N ; i++)
  {
    printf("%s\t" , imprime[i].nome );
    printf("%d\t" , imprime[i].idade );
    printf("%d\t" , imprime[i].peso );
    printf("%.2f\n" , imprime[i].altura );
  }
}
void pessoa (INDIVIDUO *pessoa, int i)
{

  printf("Digite o nome do paciente %d: ", i+1);
  scanf("%s" , pessoa[i].nome );
  printf("Digite a idade do paciente: ");
  scanf("%d" , &pessoa[i].idade );
  printf("Digite o peso do paciente: ");
  scanf("%d" , &pessoa[i].peso );
  printf("Digite o altura em metros do paciente: ");
  scanf("%f" , &pessoa[i].altura );
}
int main()
{
  INDIVIDUO* V = (INDIVIDUO*)malloc(sizeof(INDIVIDUO)*MAX);
  int Num;
    printf("Cadastro de Pacientes\nDigite o numero de pacientes(1 a 10): ");
  scanf("%d", &Num);
  while ( Num > MAX )
  {
  printf("Voce digitou um numero superior ao permitido\n");
  printf("Digite o numero de pacientes(1 a 10): ");
  scanf("%d", &Num);

  }
  int i;
  for ( i = 0 ; i < Num ; i++)
  {
  pessoa(V , i);
  }
  imprime ( Num , V);
  free(V);
  return 0;
}

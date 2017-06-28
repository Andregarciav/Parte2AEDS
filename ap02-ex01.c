#include <stdio.h>
#include <stdlib.h>
#define MAX 10
typedef struct pessoa
  {
    char nome[20];
    int idade, peso;
    float altura;
  }INDIVIDUO;
int cadastro( int N )
{
  INDIVIDUO cadastro[MAX];
  int i;
  for ( i = 0 ; i < N ; i++)
  {
    printf("Digite o nome do paciente: ");
    scanf("%c " , cadastro[i].nome );
    printf("Digite a idade do paciente: ");
    scanf(" %d " , &cadastro[i].idade );
    printf("Digite o peso do paciente: ");
    scanf(" %d " , &cadastro[i].peso );
    printf("Digite o altura em metros do paciente: ");
    scanf(" %f " , &cadastro[i].altura );
  }
}
imprime(N)
{
  INDIVIDUO imprime[MAX];
  int i;
  printf("Paciente\nNome\t\tidade\tpeso(kg)\taltura\n");
  for ( i = 0 ; i < N ; i++)
  {
    printf("%c\t" , imprime[i].nome );
    printf("%d\t" , imprime[i].idade );
    printf("%d\t" , imprime[i].peso );
    printf("%f\t" , imprime[i].altura );
  }
}
int main()
{
  int Num;
  printf("Cadastro de Pacientes\nDigite o numero de pacientes(1 a 10): ");
  scanf("%d", &Num);
  while ( Num > MAX )
  {
  printf("Voce digitou um numero superior ao permitido\n");
  printf("Digite o numero de pacientes(1 a 10): ");
  scanf("%d", &Num);
  }
  cadastro (Num);
  imprime();
  return 0;
}

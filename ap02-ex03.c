#include <stdio.h>
#include <stdlib.h>

enum semana { Domingo = 1, Segunda , Terca, Quarta, Quinta, Sexta, Sabado };

typedef enum semana Dia;
int main(int argc, char const *argv[])
{
  Dia semana;
  int num;
  printf("Digite um numero de 1 a 7 correspondente ao dia da semana\n" );
  scanf("%d", &num);
  printf("O nomero %d corresponde a " , num);
  semana = num;
  switch (num) {
    case 1:
    printf("Domingo\n");
    break;
    case 2:
    printf("Segunda\n");
    break;
    case 3:
    printf("Terça\n");
    break;
    case 4:
    printf("Quarta\n");
    break;
    case 5:
    printf("Quinta\n");
    break;
    case 6:
    printf("Sexta\n");
    break;
    case 7:
    printf("Sabado\n");
    break;
  }

  return 0;
}

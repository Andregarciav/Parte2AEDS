#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string.h>
#include <ctype.h>

#define MAX 80

typedef struct aluno
{
  char *nome;
  int idade;
  int matricula;
} aluno_ler;

void ler_aluno()
  {
    int i = 0;
    aluno_ler alunos[MAX];
    FILE *arq_r;
    FILE *arq_w;
    char buf[MAX];
    arq_r = fopen("alunos.txt","r");
    arq_w = fopen("binario.txt","wb");
    if ((arq_r == NULL)||(arq_w == NULL))
    {
      printf("Erro ao abrir/criar arquivo\n");
      return;
    }


    fgets(buf,MAX, arq_r);
    while (!feof(arq_r))
      {
        alunos[i].nome = strtok(buf,",");
        alunos[i].idade  = atoi(strtok(NULL,","));
        alunos[i].matricula = atoi(strtok(NULL,","));
        i++;
        fgets(buf,MAX, arq_r);
      }
      fclose(arq_r);
      fwrite(alunos, sizeof(aluno_ler), i , arq_w);
      fclose(arq_w);
  }

int main(int args, char * arg[])
{
  ler_aluno();
  return 0;
}

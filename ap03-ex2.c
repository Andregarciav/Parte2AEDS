#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string.h>
#include <ctype.h>

#define MAX 80



int **alocar(int N, int M)
{
  int **v, i;
  v = (int**)calloc(N , sizeof(int*)); //aloca dinamicamente memória sem inicializar
  for (i=0; i<N;i++)
  {
    v[i]=(int*)calloc(M ,sizeof(int));
  }
  return v;
}


int main()
{
  int N, M, i, j, k, i1, j1;
  int **v0;
  int **v1;
  int **v2;
  char buf[MAX];FILE *arq = fopen("matrizes.txt","r");
  if (arq == NULL)
  {
    printf("Erro ao abrir arquivo\n");
    return 1;
  }
  fscanf( arq, "%d %d", &N, &M);
  printf("%d %d\n", N,M);
  i1 = N;
  v0 = alocar(N, M);
  for ( i=0; i<N ; i++ )
  {
    for (j = 0; j < M; j++)
    {
    fscanf( arq ," %d", &v0[i][j]);
    }
  }
  printf("A primeira matriz armazenada foi:\n");
  for ( i=0; i<N ; i++ )
  {
    for (j = 0; j < M; j++)
    {
    printf("%d ", v0[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  fscanf( arq, "%d %d", &N, &M);
  printf("%d %d\n", N,M);
  j1 = N;
  //cahamando a matriz v1 e alocando ela
  v1 = alocar(N, M);
  for ( i=0; i<N ; i++ )
  {
    for (j = 0; j < M; j++)
    {
    fscanf( arq, " %d", &v1[i][j]);
    }
  }
  printf("A segunda matriz armazenada foi:\n");
  for ( i=0; i<N ; i++ )
  {
    for (j = 0; j < M; j++)
    {
    printf("%d ", v1[i][j]);
    }
    printf("\n");
  }
  //chamando a matriz v2 e alocando ela na memória
  v2 = alocar(i1, M);
  //realizando a operação de multiplicação
  for (i=0;i<i1; i++)
    {
      for (j=0; j<i1; j++)
      {
        for (k=0; k<j1; k++)
        {
          v2[i][j] = v2[i][j] + (v0[i][k] * v1[k][j]);
        }
      }
    }
  //Impressão da matriz v2=v1*v0
  for ( i=0; i<i1 ; i++ )
  {
    for (j = 0; j < M; j++)
    {
    printf("%d ", v2[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  for (i = 0; i <i1 ; i++)
  {
    free(v0[i]);
    free(v1[i]);
    free(v2[i]);
  }
  free(v0);
  free(v1);
  free(v2);
return 0;

}

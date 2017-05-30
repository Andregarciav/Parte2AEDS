#include <stdio.h>
#include <stdlib.h>

int **alocar(int N, int M){
  int **v, i;
  v = (int**)malloc(N*sizeof(int*)); //aloca dinamicamente memória sem inicializar
  /*calloc(N, sizeof(int)) //aloca dinamicamente memória inicializando, maior custo*/
  for (i=0; i<N;i++){
    v[i]=(int*)malloc(M*sizeof(int));
  }
  return v;
}


int main() {
  int N, i, j, M;
  int **v0;
  int **v1;
  int **v2;
  scanf(" %d %d", &N, &M);
  v0 = alocar(N, M);
  for ( i=0; i<N ; i++ )
  {
    for (j = 0; j < M; j++)
    {
    scanf(" %d", &v0[i][j]);
    }
  }
  v1 = alocar(N, M);
  for ( i=0; i<N ; i++ )
  {
    for (j = 0; j < M; j++)
    {
    scanf(" %d", &v1[i][j]);
    }
  }
  v2 = alocar(N, M);
  for ( i=0; i<N ; i++ )
  {
    for (j = 0; j < M; j++)
    {
      v2[i][j] = v0[i][j] + v1[i][j];
    }
  }
  for ( i=0; i<N ; i++ )
  {
    for (j = 0; j < M; j++)
    {
    printf("%d ", v2[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  for (i = 0; i < N; i++)
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

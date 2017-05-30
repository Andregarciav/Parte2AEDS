#include <stdio.h>
#include <stdlib.h>

int *alocar(int N){
  int *v, i;
  v = (int*)malloc(N*sizeof(int)); //aloca dinamicamente memória sem inicializar
  /*calloc(N, sizeof(int)) //aloca dinamicamente memória inicializando, maior custo*/
  for (i=0; i<N;i++){
    v[i]=i;
  }
  return v;
}


int main() {
  int N, i;
  int *v;
  scanf(" %d", &N);
  v = alocar(N);
  for ( i=0; i<N ; i++ ){
    printf("%d ", v[i]);
  }printf("\n");
  free(v);
  scanf(" %d", &N);
  v = alocar(N);
  for ( i=0; i<N ; i++ ){
    printf("%d ", v[i]);
  }printf("\n");
  free(v);

  return 0;

}

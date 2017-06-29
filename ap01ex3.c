#include <stdio.h>
#include <stdlib.h>

int *soma(int v[])
{
  int *v1 = calloc(9, sizeof(int));
  int i , j;
  for (i=0 ; i < 9 ; i++)
  {
    for (j=0 ; j<=i ; j++)
    {
    v1[i] += v[j];
    }
  }
  return v1;
}

int main() {
  int j , *v1;
  int v[]={25, 4 ,10, 30, 20, 1, 3, 5, 6};
  v1 = soma(v);
  for (j=0 ; j<9 ; j++)
  {
  printf("%d ", v1[j]);
  }
  printf("\n");
 free (v1);
return 0;

}

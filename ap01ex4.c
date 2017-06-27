//Declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
//Função de compração de inteiros
int AumentaOsIguais(int A, int B)
{
    // Declação dos ponteiros
    int *end_var1 = NULL, *end_var2 = NULL;
    end_var1 = &A; //armazena endereço de A no ponteiro end_var1
    end_var2 = &B; //armazena endereço de B no ponteiro end_var2
    //condição de forem diferentes  entra no if
    if (*end_var1 != *end_var2)
    {
      *end_var1 = *end_var1 - 1; //decrementa 1 no valor apontado por end_var1
      *end_var2 = *end_var2 - 1; //decrementa 1 no valor apontado por end_var2
      printf("%d %d", *end_var1, *end_var2 ); // imprime os valores armazenados nos endereços apontados
      printf("\n");
      return 0; //mata a função e retorna 0
    }
    // caso não entre no if
    *end_var1 = *end_var1 + *end_var2; // armazena no endereço apontado o valor da soma  dos conteudos
    *end_var2 = *end_var1; // armazena no endereço end_var2 o valor apontado end_var1
    printf("%d %d", *end_var1, *end_var2 ); // imprime os valores armazenados nos endereços apontados
    printf("\n");
}


int main()
{
  //Declaração de variáveis
  int num1, num2;
  //espera usuário  digitar os valores
  scanf("%d %d", &num1 , &num2);
  //chama a função
  AumentaOsIguais(num1 , num2);
  return 0;
}

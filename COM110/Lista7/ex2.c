#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
  int opcao, c, i, j, k, M[8][8], num;
  char n[21];

  opcao = 0;        // Inicialização do while

  srand (time(NULL));        // Utilizado em conjunto com o gerador de numeros, inicializa o gerador de numeros

  while ((opcao < 1) || (opcao) > 2)        // Proteção do menu
  {
    printf ("Escolha uma das opções abaixo\n\n1 - Gerar numeros para cada posição da matriz\n2 - Digitar os numeros da matriz (valor com no maximo 20 caracteres)\n\n");
    scanf ("%s", n);

    opcao = atoi(n);        // Proteção contra letras
  }

  system ("clear");

  switch (opcao)
  {
    case 1:
      while ((j == 0) || (k == 0))
      {
        j = (rand() % 9);        // Atribui um numero aleatorio a variavel numero
        k = (rand() % 9);        // Atribui um numero aleatorio a variavel numero
      }

      printf ("\nNumero de linhas da matriz com numeros = %d.\n", j);
      printf ("\nNumero de colunas da matriz com numeros = %d.\n", k);

      for (c=0 ; c<8 ; c++)
      {
        for (i=0 ; i<8 ; i++)
        {
          if ((c < j) && (i < k))
          {
            M[c][i] = (rand() % 100);
          }
        }        
      }

      printf ("\n\nMatriz gerada\n(X = posição sem valor ou nula)\n\n");

      for (c=0 ; c<8 ; c++)
      {
        for (i=0 ; i<8 ; i++)
        {
          if ((c < j) && (i < k))
          {
            printf ("[%d]", M[c][i]);
          }
          else
          {
            printf ("[X]");
          }
        }     
        printf ("\n");   
      }

      if (j == k)
      {
        printf ("\n\nA matriz é simetrica\n\n");
      }
      else
      {
        printf ("\n\nA matriz não é simetrica\n\n");
      }
    break;

    case 2:
    break;  
  }
  printf ("\n\nPrograma Finalizado\n\n");
  return 0;
}

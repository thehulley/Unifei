#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
  int c, i, j, k, M[8][8], num;
  char n[1];

  srand (time(NULL));        // Utilizado em conjunto com o gerador de numeros, inicializa o gerador de numeros

  n[0] = 0;

  while ((n[0] < 1) || (n[0] > 2))        // Opcao entre gerar ou não
  {
    printf ("\n\nGerar matriz ? (1 - sim / 2 - não)\n\n");
    scanf ("%s", n);

    n[0] = atoi(n);
  }

  system ("clear");

  if (n[0] == 1)        // Se opcao = 1
  {
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
  }
  else
  {
    printf ("\n\nA opção 2 foi selecionada, portando fechando o programa\n\n");
  }

  printf ("\n\nPrograma Finalizado\n\n");

  return 0;
}

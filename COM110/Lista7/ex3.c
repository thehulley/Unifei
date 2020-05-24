#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int M[4][7], c, i, menor, lugarmen[1][2], maior, lugarmai[1][2];

  srand (time(NULL));

  menor = 100;
  maior = 0;

  for (c=0 ; c<4 ; c++)
  {
    for (i=0 ; i<7 ; i++)
    {
      M[c][i] = (rand() % 100);
    }
  }

  printf ("\n\n=-=-=-=-=-=-=[ Matriz Gerada ]=-=-=-=-=-=-=\n\n");

  for (c=0 ; c<4 ; c++)
  {
    for (i=0 ; i<7 ; i++)
    {
      printf ("[%d]", M[c][i]);
    }
    printf ("\n");
  }

  for (c=0 ; c<4 ; c++)
  {
    for (i=0 ; i<7 ; i++)
    {
      if (M[c][i] < menor)
      {
        menor = M[c][i];
        lugarmen[0][0] = c;
        lugarmen[0][1] = i;
      }
    }
  }

  for (c=lugarmen[0][0] ; c<=lugarmen[0][0] ; c++)
  {
    for (i=0 ; i<=lugarmen[0][1] ; i++)
    {
      if (M[c][i] > maior)
      {
        maior = M[c][i];
        lugarmai[0][0] = c;
        lugarmai[0][1] = i;
      }
    }
  }

  printf ("\n\nmenor elemento = [%d,%d]\n", lugarmen[0][0]+1, lugarmen[0][1]+1);
  printf ("MINMAX = [%d,%d]\n", lugarmai[0][0]+1, lugarmai[0][1]+1);

  return 0;
}

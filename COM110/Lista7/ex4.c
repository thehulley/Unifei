#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int opcao, M[5][7], c, i, j, menores[5][2], maior, possui;
  char n[128];

  srand (time(NULL));

  for (c=0 ; c<5 ; c++)
  {
    menores[c][0] = 100;
  }

  possui = 0;
  
  while ((opcao < 1) || (opcao > 2))
  {
    printf ("\nEscolha uma das opções\n\n1 - Gerar matriz automaticamente\n2 - Digitar os valores da matriz\n\n");
    scanf ("%s", n);

    opcao = atoi(n);
  }

  switch (opcao)
  {
    case 1:
      printf ("\n-=-=-=-=-=-=-=-[ Matriz Gerada ]-=-=-=-=-=-=-=-\n\n");

      for (c=0 ; c<5 ; c++)
      {
        for (i=0 ; i<7 ; i++)
        {
          M[c][i] = (rand() % 50);
          printf ("[%d] ", M[c][i]);
        }
        printf ("\n");
      }
    break;

    case 2:
      for (c=0 ; c<5 ; c++)
      {
        for (i=0 ; i<7 ; i++)
        {
          printf ("\nDigite o valor que ocupa a posição [%d,%d]  (Letras e caracteres especiais serão considerados como 0)\n", c+1, i+1);
          scanf ("%s", n);

          M[c][i] = atoi(n);
        }
      }

      printf ("\n-=-=-=-=-=-=-=-[ Matriz Gerada ]-=-=-=-=-=-=-=-\n\n");

      for (c=0 ; c<5 ; c++)
      {
        for (i=0 ; i<7 ; i++)
        {
          printf ("[%d] ", M[c][i]);
        }
        printf ("\n");
      }
    break;
  }

  printf ("\n\n-=-=-=-=-=-=-=[ Menores Valores ]=-=-=-=-=-=-=-\n\n");

  for (c=0 ; c<5 ; c++)
  {
    for (i=0 ; i<7 ; i++)
    {
      if (M[c][i] < menores[c][0])
      {
        menores[c][0] = M[c][i];
        menores[c][1] = i;
      }
    }
    printf ("\n[Linha %d - Coluna %d] e possui o valor de %d", c+1, menores[c][1]+1, menores[c][0]);
  }

  printf ("\n\n-=-=-=-=-=-=-=[ Ponto de Sela ]=-=-=-=-=-=-=-\n\n");

  for (c=0 ; c<5 ; c++)
  {
    maior = menores[c][0];
    j = menores[c][1];

    for (i=0 ; i<5 ; i++)
    {
      if (M[i][j] > maior)
      {
        maior = M[i][j];
      }
    }

    if (maior == menores[c][0])
    {
      printf ("A matriz possui ponto de sela na posição [%d,%d] = %d\n\n", c+1, menores[c][1]+1, menores[c][0]);

      possui = possui + 1;
    }
  }

  if (possui == 0)
  {
    printf ("A matriz não possui ponto de sela\n\n");
  }

  return 0;
}

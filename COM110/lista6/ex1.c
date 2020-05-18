#include <stdio.h>
#include <stdlib.h>

int main()
{
  int vet[8], numero[8], n, c, i, j, caracteres, p;

  for (c=0 ; c<8 ; c++)       // define todos os valores do vetor numero[] como 999999 para o programa funcionar sem erros.
  {
    numero[c] = 999999;
  }

  system ("clear");       // limpa o flood de mensagens (se SO for linux)
  printf ("-=-=-=-=-=-=-[ Organizador ]-=-=-=-=-=-=-\nAtenção este programa só aceita numeros de -999999 à 999999!!\n");

  for (c=0 ; c<8 ; c++)
  {
    p = 999999;

    while ((p <= -999999) || (p >= 999999))       // Proteção contra valores menores que -999998 e maiores que 999998
    {
      printf ("\nDigite o %dº numero\n", c+1);
      scanf ("%d", &numero[c]);

      p = numero[c];
    }

    vet[c] = numero[c];       // Parte que atribui os valores de numero[] a vet[] para salvar a ordem de digitação dos valores

    for (j=0; j<8; j++)       // Parte que organizar o vetor em ordem crescente pelo sistema "Bubble sort"
    {
      for (i=0; i<8-1; i++)
      {
        if (numero[i] > numero[i + 1])
        {
          n = numero[i];
          numero[i] = numero[i + 1];
          numero[i + 1] = n;
        }
      }
    }
    
    printf ("\n");

    for (j=0; j<8; j++)        // Parte que imprime em ordem crescente durante a digitação dos valores do vetor numero[] 
    {
      if ((numero[j] > -999999) && (numero[j] < 999999))        // Parte estética, para deixar mais bonito o console sem o flood
      {
        printf ("%d ", numero[j]);
      }
      else
      {
        printf ("0 "); 
      }
    }

    printf ("\n\n");

    for (j=7; j>=0; j--)        // Parte que imprime em ordem decrescente durante a digitação dos valores do vetor numero[] 
    {
      if ((numero[j] > -999999) && (numero[j] < 999999))        // Parte estética, para deixar mais bonito o console sem o flood
      {
        printf ("%d ", numero[j]);
      }
      else
      {
        printf ("0 ");
      }
    }
    printf ("\n");
  }

  printf ("\n\n-=-=-=-=-=-=-=-[ Ordem Digitada ]-=-=-=-=-=-=-=-\n\n");

  for (c=0 ; c<8 ; c++)       // Imprime o vetor vet[] que durante o for foi salvando a sequencia de numeros digitada
  {
    printf ("%d ", vet[c]);
  }

  printf ("\n\n-=-=-=-=-=-=-=-[ Ordem Crescente ]-=-=-=-=-=-=-=-\n\n");

  for (c=0 ; c<8 ; c++)       // Imprime o vetor numero[] que armazenou a ordem crescente
  {
    printf ("%d ", numero[c]);
  }

  printf ("\n\n=-=-=-=-=-=-=-[ Ordem Decrescente ]-=-=-=-=-=-=-=\n\n");

  for (c=7 ; c>=0 ; c--)       // Imprime o vetor numero[] que armazenou a ordem decrescente
  {
    printf ("%d ", numero[c]);
  }
  
  printf ("\n\n");

  return 0;
}

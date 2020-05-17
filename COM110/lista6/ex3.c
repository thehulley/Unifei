#include <stdio.h>
#include <stdlib.h>

int main()
{
  int c, dado, total[6], seq[20];
  char n[2];

  for (c=1 ; c<=6 ; c++)        // "Reset" do valor do vetor total[6]
  {
    total[c] = 0;
  }

  for (c=1 ; c<=20 ; c++)
  {
    dado = 0;

    while ((dado < 1) || (dado > 6))        // Proteção contra letras/caracteres especiais/numeros <1 e >6
    {
      printf ("\nQual lado caiu na %dº jogada?\n", c);
      scanf ("%s", n);

      dado = atoi(n);
    }

    seq[c] = dado;
    total[dado] = total[dado] + 1;        // Contador utilizando o vetor para armazenar em cada posição o numero de vezes
  }

  printf ("\n\n-=-=-=-=-[ Resultados ]-=-=-=-=-\n\n");

  for (c=1 ; c<=6 ; c++)        // Exibe a quantidade de vezes que o numero "c" caiu
  {
    printf (" - O numero %d caiu %d vez/vezes - \n", c, total[c]);
  }

  printf ("\n\n-=-=[ Sequência de jogadas ]=-=-\n\n");

  for (c=1 ; c<=20 ; c++)       // Mostra o valore caido por jogada em ordem
  {
    printf ("|%d| ", seq[c]);
  }

  return 0;
}

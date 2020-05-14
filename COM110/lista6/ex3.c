#include <stdio.h>
#include <stdlib.h>

int main()
{
  int c, dado, total[6], seq[20];
  char n[2];

  for (c=1 ; c<=6 ; c++)
  {
    total[c] = 0;
  }

  for (c=1 ; c<=20 ; c++)
  {
    dado = 0;

    while ((dado < 1) || (dado > 6))
    {
      printf ("\nQual lado caiu na %dº jogada?\n", c);
      scanf ("%s", n);

      dado = atoi(n);
    }

    seq[c] = dado;
    total[dado] = total[dado] + 1;
  }

  printf ("\n\n-=-=-=-=-[ Resultados ]-=-=-=-=-\n\n");

  for (c=1 ; c<=6 ; c++)
  {
    printf (" - O numero %d caiu %d vez/vezes - \n", c, total[c]);
  }

  printf ("\n\n-=-=[ Sequência de jogadas ]=-=-\n\n");

  for (c=1 ; c<=20 ; c++)
  {
    printf ("|%d| ", seq[c]);
  }

  return 0;
}

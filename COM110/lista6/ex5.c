#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int c, n, letras, l,a;
  char palavra[128], alfabeto[27] = "abcdefghijklmnopqrstuvwxyz", p[2];


  printf ("\n\n-=-=-=-=-=-=-=-[ Alfabeto utilizado ]-=-=-=-=-=-=-=-\n\n(a b c d e f g h i j k l m n o p q r s t u v w x y z)\n\n");

  printf ("Digite uma palavra\n");
  scanf ("%s", palavra);

  printf ("\nDigite o numero de posições\n");
  scanf ("%d", &n);
  a = n;

  letras = strlen(palavra);
  printf ("\nEssa palavra tem %d letras", letras);

  printf ("\n\n\n\n-=-=-=-=-=-=-=-[ Palavra digitada ]-=-=-=-=-=-=-=-\n\n%s", palavra);

  printf ("\n\n-=-=-=-=-=-=-[ Palavra criptografada ]-=-=-=-=-=-=-\n\n");

  for (c=0 ; c < letras ; c++)
  {
    n = a;
    for (l=0 ; l < 27 ; l++)
    {
      if (palavra[c] == alfabeto[l])
      {
        n = n+l;

        if (c + n > 26)
        {
          n = (c + n)-26;
          printf ("\nvai da erro parça\n");

          palavra[c] = alfabeto[n];

          printf ("%c", palavra[c]);
          break;
        }
        else if ((c + n >= 0) && (c + n <= 26))
        {
          palavra[c] = alfabeto[n];

          printf ("%c", palavra[c]);
          break;
        }
        else
        {
          n = 26 + n;
          printf ("\nvai da menos erro parça\n");

          palavra[c] = alfabeto[n];

          printf ("%c", palavra[c]);
          break;
        }

        printf ("%d\n",c);
      }
    }
  }

  printf ("\n\n");

  return 0;
}

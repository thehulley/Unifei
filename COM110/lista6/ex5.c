#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int c, i, n, letras, a;
  char palavra[129], alfabeto[27] = " abcdefghijklmnopqrstuvwxyz", p[4];

  printf ("\n\n-=-=-=-=-=-=-=-[ Alfabeto utilizado ]-=-=-=-=-=-=-=-\n\n(a b c d e f g h i j k l m n o p q r s t u v w x y z)\n\n");

  printf ("Digite uma palavra\n");
  scanf ("%s", palavra);

  n = 27;

  while ((n < -26) || (n > 26))
  {
    printf ("\nDigite o numero de posições        (O numero de posições deve ser maior ou igual -26 e menor ou igual a 26)\n");
    scanf ("%s", p);
    
    n = atoi(p);
    a = n;
  }

  letras = strlen(palavra);
  printf ("\nEssa palavra tem %d letras", letras);

  printf ("\n\n\n\n-=-=-=-=-=-=-=-[ Palavra digitada ]-=-=-=-=-=-=-=-\n\n%s", palavra);

  printf ("\n\n-=-=-=-=-=-=-[ Palavra criptografada ]-=-=-=-=-=-=-\n\n");

  for (c=letras ; c>0 ; c--)
  {
    palavra[c] = palavra[c - 1];
  }

  palavra[0] = ' ';

  if (n > 0)
  {
    for (c=1 ; c<=letras ; c++)
    {
      for (i=1 ; i<=26 ; i++)
      {
        if (palavra[c] == alfabeto[i])
        {
          if ((i + n) > 26)
          {
            printf ("%c", alfabeto[(i + n) - 26]);
          }
          else
          {
            printf ("%c", alfabeto[i+n]);
          }
        }
      }
    }
  }
  else if (n < 0)
  {
    for (c=1 ; c<=letras ; c++)
    {
      for (i=1 ; i<=26 ; i++)
      {
        if (palavra[c] == alfabeto[i])
        {
          if (i + n < 0)
          {
            printf ("%c", alfabeto[26 + (i + n)]);
          }
          else if (i + n == 0)
          {
            printf ("%c", alfabeto[26]); 
          }
          else
          {
            printf ("%c", alfabeto[i + n]);
          }
        }
      }
    }
  }
  else
  {
    for (c=1 ; c<=letras ; c++)
    {
      printf ("%c", palavra[c]);
    }
  }

  printf ("\n\n");

  return 0;
}

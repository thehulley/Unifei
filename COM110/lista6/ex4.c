#include <stdio.h>
#include <stdlib.h>

int main()
{
  int c;
  char palavra[10];

  printf ("\nDigite uma palavra com 10 caracteres\n");
  scanf ("%s", palavra);
  printf ("\n");

  for (c = 10 ; c >= 0 ; c-- )
    printf("%c", palavra[c]);
  return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
  int c, caracteres;
  char palavra[1000];

  caracteres = 1001;

  while (caracteres > 1000)       // Proteção contra palavras com mais de 1000 caracteres
  {
    printf ("\nDigite uma palavra com 10 caracteres\n");
    scanf ("%s", palavra);

    caracteres = strlen(palavra);       // Para que o programa não fique muito "limitado" existe a contagem de caracteres da palavra digitada

    if (caracteres > 1000)
    { 
      printf ("\nO numero de caracteres da palavra digitada não pode passar de 1000!\n");
    }
    else
    {
      printf ("\nEssa palavra possui %d letras.\n", caracteres);
    }
  }

  printf ("\n");

  for (c=caracteres ; c>=0 ; c--)       // Exibe a palavra, contudo o valor inicial do contador é dado pelo numero de letras da palavra, com isso o programa não trava caso o numero de letras exceda 10.
  {
    printf ("%c", palavra[c]);
  }

  printf ("\n\n");

  return 0;
}

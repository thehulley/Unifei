#include <stdio.h>
#include <stdlib.h>
int main()
{
  int x=-2;

  while (x<0 || x>3)
  {
    printf("\nEscolha uma saudação\n1 - Oi\n2 - Olá\n3 - Salve\n0 - Sair\n");
    scanf("%d", &x);

    if(x==1)
    {
      printf("\nOi");
    }

    if(x==2)
    {
      printf("\nOlá");
    }

    if(x==3)
    {
      printf("\nSalve");
    }
  }
  printf("\nAdeus :(\n");
  return 0;
}
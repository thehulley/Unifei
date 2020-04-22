#include <stdio.h>
#include <stdlib.h>
int main()
{
  int min;

  printf("\nDigite os minutos\n");
  scanf ("%d", &min);
  printf("%d Minutos tem %d Segundos\n", min,min*60);
  return 0;
}
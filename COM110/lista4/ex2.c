#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int x, n, z;
  printf("\nDigite um valor para n\n");
  scanf ("%d", &n);
  x=0;
  
  while (x<=n)
  {
    z=pow(3,x);
    printf("3 elevado a %d = %d \n",x,z);
    x=x+1;
  }
  return 0;
}
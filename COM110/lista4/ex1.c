#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int e1()
{
  int x, n, z;
  printf("\nDigite um numero\n");
  scanf ("%d", &n);
  x=0;
  
  while (x<=10)
  {
    z=pow(n,x);
    printf("%d elevado a %d = %d\n",n,x,z);
    x=x+1;
  }
  return 0;
}
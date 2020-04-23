#include <stdio.h>
#include <stdlib.h>
int e12()
{
  int c=1,d=20,i=1,t;

  printf("\n -=-=-[ Lista Crescente ]-=-=-\n");
  while(c<=20)
  {
    printf("%d ",c);
    c=c+1;
  }

  printf("\n-=-=-[ Lista Decrescente ]-=-=-\n");
  while(d>=1)
  {
    printf("%d ",d);
    d=d-1;
  }

  printf("\n -=-=-[ Numeros ímpares ]-=-=-\n");
  while(i<=20)
  {
    t=i%2;
    if(t==1)
    {
      printf("%d ",i);
    }

    i=i+1;
  }
  printf("\n");

  return 0;
}
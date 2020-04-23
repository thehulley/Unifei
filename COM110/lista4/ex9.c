#include <stdio.h>
#include <stdlib.h>
int ex9()
{
  int c=0;

  while(c<=6)
  {
    if(c==1 || c==6)
    {
      printf("\n#######################");
    }
    if(c==2 || c==4)
    {
      printf("\n#                     #");
    }
    if(c==3)
    {
      printf("\n#   SEJA  BEM-VINDO   #");
    }

    c=c+1;
  }
  return 0;
}
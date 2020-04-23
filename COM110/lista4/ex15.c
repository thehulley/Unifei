#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n=0,c=0,x;

	while(n<2)
	{
    printf("Digite um numero:  (Maior ou igual a 2)\n");
    scanf("%d",&n);
	}
  
  printf("\n\n-=-=-=-[ Imagem ]-=-=-=-\n");
  while(c<n)
	{
    for(x = 0; x <= c; x++)
    {
      printf("#");
      
    }  
    printf("\n");
    c = c+1;
	}
  return 0;
}
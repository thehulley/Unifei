#include <stdio.h>
#include <stdlib.h>
int e16()
{

	int n1=-1,n2=-1,c,x;
	
	while(n1<0)
	{
    printf("Digite o primeiro valor:\n");
    scanf("%d",&n1);
	}
  c = n1;

  while(n2<0)
  {
    printf("Digite o segundo valor:\n");
    scanf("%d",&n2);
  }
  
  while(c<=n2)
  {
    printf("\n-=-=-=-[ Tabela do numero %d ]-=-=-=-\n",c);
    
    for(x = 0; x <= 10; x++)
    {
      printf("%d X %d = %d\n",c,x,c*x);
    }
    c = c+1;
	}
  return 0;
}
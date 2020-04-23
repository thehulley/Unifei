#include <stdio.h>
#include <stdlib.h>
int e13()
{
  int n1,n2,x;

	printf("Digite o primeiro numero:\n");
	scanf("%d",&n1);
	printf("\nDigite o segundo numero:\n");
	scanf("%d",&n2);
	printf("\n-=-=-[ Lista ]-=-=-\n");
  
  for(x = n1; x <= n2; x++)
  {
    printf("%d\n",x);
  }
  return 0;
}
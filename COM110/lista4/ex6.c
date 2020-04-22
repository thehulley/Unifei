#include <stdio.h>
#include <stdlib.h>
int main()
{
  float x, y=0, ad, su, mu, di;
  int teste;
  teste=56;

  printf("\nDigite um valor para X\n");
  scanf("%f", &x);

  while(y==0)
  {
    printf("\n-=-Digite um valor para Y-=-\nDigite um valor para y diferente de 0\n");
    scanf("%f", &y);
  }

  ad=x+y;
  su=x-y;
  mu=x*y;
  di=x/y;

  printf("\nAdição = %f\nSubtração = %f\nMultiplicação = %f\nDivisão = %f\n", ad,su,mu,di);
  return 0;
}
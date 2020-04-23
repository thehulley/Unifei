#include <stdio.h>
#include <stdlib.h>
int e7()
{
  float alt=0,pes=0, imc;

  while (alt<=0)
  {
    printf("\nDigite a sua altura: (digite um valor maior que 0 e em metros, EX: 1.70 para 1.70m)\n\n");
    scanf("%f", &alt);
  }

  while (pes<=0)
  {
    printf("\nDigite o seu peso: (digite um valor maior que 0 e em kg, EX: 70 para 70kg)\n\n");
    scanf("%f", &pes);
  }

  imc = pes/(alt*alt);
  printf("\n<==========>\n\nSeu IMC é %f\n\n<==========>\n",imc);

  return 0;
}
#include <stdio.h>
#include <stdlib.h>
int ex10()
{
  int vel=0, velmax=0, aci;

  while(vel<=0)
  {
    printf("\nDigite a velocidade do carro:\n\n<==========>\n(Digite um valor maior que 0)\n<==========>\n\n");
    scanf ("%d", &vel);
  }
  while(velmax<=0)
  {
    printf("\nDigite a velocidade maxima da via:\n\n<==========>\n(Digite um valor maior que 0)\n<==========>\n\n");
    scanf ("%d", &velmax);
  }

  aci = (vel * 100)/velmax;

  if(aci <= 100)
  {
    printf("\n\n<==========>\nNão houve multa\n<==========>\n");
  }
  if(aci > 100 && aci < 120)
  {
    printf("\n\n<==========>\nO carro estava %d porcento acima da velocidade maxima da via, portanto valor da multa é R$ 85,13\n<==========>\n",aci-velmax);
  }
  if(aci >= 120 && aci <= 150)
  {
    printf("\n\n<==========>\nO carro estava %d porcento acima da velocidade maxima da via, portanto valor da multa é R$ 127,69\n<==========>\n",aci-velmax);
  }
  if(aci > 150)
  {
    printf("\n\n<==========>\nO carro estava %d porcento acima da velocidade maxima da via, portanto valor da multa é R$ 574,62\n<==========>\n",aci-velmax);
  }

  return 0;
}
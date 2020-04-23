#include <stdio.h>
#include <stdlib.h>
int e11()
{
  int diaa,mesa,anoa,dian,mesn,anon,anos;
	char msg1[] = "\n-=-=-=-[ Digite a data de hoje ]-=-=-=-\n\n",msg2[] = "\n-=-=-=-[ Digite a data de seu nascimento ]-=-=-=-\n\n";

	//parte atribuindo os valores para que as repetições funcionem
	diaa = 0;
	mesa = 0;
	anoa = 0;

	dian = 0;
	mesn = 0;
	anon = 0;

	//parte pedindo a data atual (dia, mes e ano)
	while(diaa <= 0 || diaa > 31)
	{
	  printf("%sDia:   (xx)\n",msg1);
	  scanf("%d",&diaa);
	}
	while(mesa <= 0 || mesa > 12)
	{
	  printf("%sMês:   (xx)\n",msg1);
	  scanf("%d",&mesa);
	}
	while(anoa <= 0 || anoa > 2020)
	{
	  printf("%sAno:   (xxxx)\n",msg1);
	  scanf("%d",&anoa);
	}
	//fim
	    
	//parte pedindo a data do nascimento (dia, mes e ano)
	while(dian <= 0 || dian > 31)
	{
	  printf("%sDia:   (xx)\n",msg2);
	  scanf("%d",&dian);
	}
	while(mesn <= 0 || mesn > 12)
	{
	  printf("%sMês:   (xx)\n",msg2);
	  scanf("%d",&mesn);
	}
	while(anon <= 0 || anon > 2020)
	{
	  printf("%sAno:   (xxxx)\n",msg2);
	  scanf("%d",&anon);
	}

  anos = anoa-anon;


	if(diaa == dian && mesa == mesn)
	{
    printf("\n<==========>\nParabéns hoje você completa %d anos\n<==========>\n",anos);
	}
  
	if((diaa > dian && mesa == mesn) || (diaa == dian && mesa > mesn) || (diaa < dian && mesa > mesn) || (diaa > dian && mesa > mesn))
	{
    printf("\n<==========>\nVocê tem %d anos\n<==========>\n",anos);
  }

	if((diaa < dian && mesa == mesn) || (diaa == dian && mesa < mesn) || (diaa > dian && mesa < mesn) || (diaa < dian && mesa < mesn))
	{
    printf("\n<==========>\nVocê tem %d anos\n<==========>\n",(anos-1));
  }

  return 0;
}
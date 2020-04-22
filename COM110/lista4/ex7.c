#include <stdio.h>
#include <stdlib.h>
int main()
{
  float hora=-1;


  while(hora < 0 || hora > 23)
  {
    printf("Digite a hora atual:\n\n<==========>\n(No formato 24 horas, Ex: 22 para 10 horas da noite)\nO valor deve ser de 0 a 23\n<==========>\n\n");
    scanf ("%f", &hora);

    if(hora >= 5 && hora <= 11)
    {
      printf("\n<==========>\n    Manhã\n<==========>\n");
    }

    if(hora >= 12 && hora <= 17)
    {
      printf("\n<==========>\n    Tarde\n<==========>\n");
    }

    if((hora >= 18 && hora <= 23)||(hora >= 0 && hora <= 4))
    {
      printf("\n<==========>\n    Noite\n<==========>\n");
    }
  }
  return 0;
}
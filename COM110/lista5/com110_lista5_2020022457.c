#include <stdio.h>
#include <math.h>

int main()
{
  int c=0, opcao=0,x,cont=0;
  double b=0,b1,b2,alt,area,c1,c2;

  while ((opcao<1) || (opcao>6))   // Repetiçao para impedir entrada de valores que não estão na lista
  {
    while (c<=15)   // "Imagem" de inicio
    {
      if((c==0) || (c==2) || (c==10) || (c==11))
      {
        printf("########################################################\n");
      }

      if(c==1)
      {
        printf("#################### MENU DE OPÇÕES ####################\n");
      }

      if((c==3) || (c==5) || (c==7) || (c==9))
      {
        printf("##                                                    ##\n");
      }

      if(c==4)
      {
        printf("##       -=-[ Escolha uma forma geométrica ]-=-       ##\n");
      }

      if(c==6)
      {
        printf("## 1 - Quadrado                                       ##\n## 2 - Retângulo                                      ##\n## 3 - Triângulo Equilátero                           ##\n## 4 - Triângulo Retângulo (catetos iguais)           ##\n## 5 - Trapézio                                       ##\n");
      } 

      if(c==8)
      {
        printf("## 6 - Sair do programa                               ##\n");
      }
      c = c+1;
    }
    printf("\n        -=-[ Escolha uma das opções da lista ]-=-\n");
    scanf("%d",&opcao);
  }

  switch (opcao)   // Escolha das opções da lista
  {
    case 1:
      b=0;
      printf("\n\n=-=-=-=-=-=-=-=-=-=-=-[ Quadrado ]-=-=-=-=-=-=-=-=-=-=-=\n\n");
      while(b<=0)
      {
        printf("\nDigite o valor da base:\n");
        scanf("%lf", &b);
      }
      area = b*b;
      printf("\nÁrea do Quadrado: %lf",area);
      printf("\nPerímetro do Quadrado: %lf\n\n",b*4);

      if(b<=20)
      {
        while(cont<b)
        {
          for(x = 0; x < b; x++)
          {
            printf(" #");
          }
          printf("\n");
          cont=cont+1;
        }
      }
      else
      {
        printf("A imagem não pode ser gerada pois o valor digitado para a base é maior que 20.\n");
      }
    break;

    case 2:
      alt=0;
      b=0;
      printf("\n\n-=-=-=-=-=-=-=-=-=-=-[ Retângulo ]-=-=-=-=-=-=-=-=-=-=-\n\n");
      while(b<=0)
      {
        printf("\nDigite o valor da base:\n");
        scanf("%lf",&b);
      }
      while(alt<=0)
      {
        printf("\nDigite o valor da altura:\n");
        scanf("%lf",&alt);
      }
      if(alt==b)
      {
        printf("\nAtenção isto não é um retangulo, mas sim um quadrado\n");
      }
      area = b*alt;
      printf("\nÁrea do Retângulo: %lf",area);
      printf("\nPerímetro do Retângulo: %lf\n\n",(b*2)+(alt*2));

      if(alt<=20 || b<=20)
      {
        while(cont<alt)
        {
          for(x = 0; x<b; x++)
          {
            printf(" #");
          }
          printf("\n");
          cont=cont+1;
        }
      }
      else
      {
        printf("A imagem não pode ser gerada quando o valor da base ou altura é maior que 20.\n");
      }
    break;

    case 3:
      alt=0;
      b=0;
      printf("\n\n=-=-=-=-=-=-=-=-[ Triângulo Equilátero ]-=-=-=-=-=-=-=-=\n\n");
      while(b<=0)
      {
        printf("\nDigite o valor de um dos lados do triângulo:\n");
        scanf("%lf",&b);
      }
      area=(pow(b,2)*sqrt(3))/4;
      c1=pow(b,2);
      c2=pow((b/2),2);
      alt=floor(sqrt(c1+c2));
      printf("\nÁrea do Triângulo: %lf",area);
      printf("\nPerímetro do Triângulo: %lf\n\n",b*3);

      if(b<=20)
      {
        while(cont<alt)
        {
          for(x = 0; x<=b; x++)
          {
            printf(" ");
          }

          for(x = 0; x<=cont; x++)
          {
            printf(" #");
          }
          printf("\n");
          b=b-1;
          cont=cont+1;
        }
      }
      else
      {
        printf("A imagem não pode ser gerada quando o valor da base ou altura é maior que 20.\n");
      }
    break;

    case 4:
      alt=0;
      b=0;
      printf("\n\n=-=-=-=-[ Triângulo Retângulo (catetos iguais) ]-=-=-=-=\n\n");
      while(b<=0)
      {
        printf("\nDigite o valor de um cateto:\n");
        scanf("%lf",&b);
      }
      c1=pow(b,2);
      c2=pow(b,2);
      area=sqrt(c1+c2);
      printf("\nÁrea do Triângulo: %lf",area);
      printf("\nPerímetro do Triângulo: %lf\n\n",b*3);

      if(b<=20)
      {
        while(cont<b)
        {
          for(x = 0; x<=cont; x++)
          {
            printf(" #");
          }
          printf("\n");
          cont=cont+1;
        }
      }
      else
      {
        printf("A imagem não pode ser gerada quando o valor da base ou altura é maior que 20.\n");
      }
    break;

    case 5:
      printf("\n\n=-=-=-=-=-=-=-=-=-=-=-[ Trapézio ]-=-=-=-=-=-=-=-=-=-=-=\n\n");
    break;

    case 6:
      printf("\n\n=-=-=-=-=-=-=-=-[ Programa  Finalizado ]-=-=-=-=-=-=-=-=\n\n");
    break;
  }

  return 0;
}

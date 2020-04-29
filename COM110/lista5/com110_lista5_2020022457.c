#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int c, opcao,x,cont,men,espaco,per;
  double b,alt,area,c1,c2,hi,b1,b2,lad1,lad2;
  
  system("clear");  //  limpa o "flood"

  while(opcao!=6)
  {

    c=0;
    opcao=0;

    printf("\n\n");

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
          printf("## 1 - Quadrado                                       ##\n## 2 - Retângulo                                      ##\n## 3 - Triângulo Equilátero                           ##\n## 4 - Triângulo Retângulo (catetos iguais)           ##\n## 5 - Trapézio Isósceles                             ##\n");
        } 

        if(c==8)
        {
          printf("## 6 - Sair do programa                               ##\n");
        }
        c = c+1;
      }

      char n[9];  // o dado da opcao é "colhido" como string para evitar o travamento do programa

      printf("\n        -=-[ Escolha uma das opções da lista ]-=-\n");
      scanf("%s",n);

      opcao=atoi(n);  // depois a string é convertida em int(caso o dado inserido seja uma letra/palavra/caracter especial a conversão considera esse dado como 0, fazendo assim com que o programa não trave)

      printf("\n\nCaracter ou numero inserido - (%s)\n",n);
    }

    switch (opcao)   // Escolha das opções da lista
    {

      /******************* Quadrado *********************/
      case 1:

        b=0;
        area=0;  // reset de todas as variaveis utilizadas na conta
        cont=0;

        printf("\n\n=-=-=-=-=-=-=-=-=-=-=-[ Quadrado ]-=-=-=-=-=-=-=-=-=-=-=\n\n");

        while(b<=0)  // proteçao contra valor menor ou igual a 0
        {
          printf("\nDigite o valor da base:\n");
          scanf("%lf", &b);
        }

        area = b*b;  // calculo da area

        system("clear");
        
        printf("\n\n=-=-=-=-=-=-=-=-=-=-=-[ Quadrado ]-=-=-=-=-=-=-=-=-=-=-=\n\n");
        printf("\nÁrea da figura: %lf",area);
        printf("\nPerímetro da figura: %lf\n\n\n",b*4);
        printf("=-=-=-=-=-=-=-=-=-=-=-=[ Figura ]=-=-=-=-=-=-=-=-=-=-=-=\n\n");

        
        if(b<=28)  // gera a imagem apenas se a base menor que 28
        {
          while(cont<b)
          {
            espaco=28-b;

            for(x = 0; x < espaco; x++)  // parte que cuida dos espacamentos do lado esquerdo
            {
              printf(" ");
            }

            if(cont==0)
            {
              for(x = 0; x <= b; x++)  // parte que cuida da geração da Imagem
              {
                printf("__");
              }
              printf("\n");
            }        

            for(x = 0; x < b; x++)  // parte que cuida da geração da Imagem
            {
              printf(" #");
            }
            printf(" |\n");
            cont=cont+1;
          }
        }
        else  // caso a base seja maior que 28 exibe a mensagem
        {
          printf("A imagem não pode ser gerada pois o valor digitado para a base é maior que 28.\n");
        }
        printf("\n\n=-=-=-=-=-=-=-=-=-=-=-=[ [][][] ]=-=-=-=-=-=-=-=-=-=-=-=\n\n");

      break;


      /******************* Retângulo *********************/
      case 2:

        alt=0;
        b=0; 
        area=0;  // reset de todas as variaveis utilizadas na conta
        cont=0;
        
        printf("\n\n-=-=-=-=-=-=-=-=-=-=-[ Retângulo ]-=-=-=-=-=-=-=-=-=-=-\n\n");

        while(b<=0)  // proteçao contra valor menor ou igual a 0
        {
          printf("\nDigite o valor da base:\n");
          scanf("%lf",&b);
        }

        while(alt<=0)  // proteçao contra valor menor ou igual a 0
        {
          printf("\nDigite o valor da altura:\n");
          scanf("%lf",&alt);
        }

        area = b*alt;  // calculo da area

        system("clear");
        
        printf("\n\n-=-=-=-=-=-=-=-=-=-=-[ Retângulo ]-=-=-=-=-=-=-=-=-=-=-\n\n");

        if(alt==b)  // aviso caso base tenha o mesmo valor da altura
        {
          printf("\nAtenção isto não é um retangulo, mas sim um quadrado\n");
        }

        printf("\nÁrea da figura: %lf",area);
        printf("\nPerímetro da figura: %lf\n\n\n",(b*2)+(alt*2));
        printf("=-=-=-=-=-=-=-=-=-=-=-=[ Figura ]=-=-=-=-=-=-=-=-=-=-=-=\n\n");

        if(alt<=26 || b<=26)  // gera a imagem apenas se a base menor que 28
        {
          while(cont<alt)
          {
            espaco=28-b;
            
            for(x = 0; x < espaco; x++)  // parte que cuida dos espacamentos do lado esquerdo
            {
              printf(" ");
            }

            for(x = 0; x<b; x++)  // parte que cuida da geração da Imagem
            {
              printf(" #");
            }
            printf("\n");
            cont=cont+1;
          }
        }
        else  // caso a base seja maior que 28 exibe a mensagem
        {
          printf("A imagem não pode ser gerada quando o valor da base ou altura é maior que 28.\n");
        }
        printf("\n\n=-=-=-=-=-=-=-=-=-=-=-=[ [][][] ]=-=-=-=-=-=-=-=-=-=-=-=\n\n");
      
      break;


      /******************* Triângulo Equilátero *********************/
      case 3:

        alt=0;
        b=0; 
        area=0;  // reset de todas as variaveis utilizadas na conta
        cont=0;
        espaco=28;
        c1=0;
        c2=0;

        printf("\n\n=-=-=-=-=-=-=-=-[ Triângulo Equilátero ]-=-=-=-=-=-=-=-=\n\n");

        while(b<=0)  // proteçao contra valor menor ou igual a 0
        {
          printf("\nDigite o valor de um dos lados do triângulo:\n");
          scanf("%lf",&b);
        }

        area=(pow(b,2)*sqrt(3))/4;  // calculo da area
        c1=pow(b,2);
        c2=pow((b/2),2);
        alt=floor(sqrt(c1+c2));

        printf("\n\n-=-=-=-=-=-=-=-=-=-=-[ Retângulo ]-=-=-=-=-=-=-=-=-=-=-\n\n");
        printf("\nÁrea da figura: %lf",area);
        printf("\nPerímetro da figura: %lf\n\n\n",b*3);
        printf("=-=-=-=-=-=-=-=-=-=-=-=[ Figura ]=-=-=-=-=-=-=-=-=-=-=-=\n\n");

        if(b<=26)  // gera a imagem apenas se a base valor de um dos lados é menor ou igual a 26
        {
          while(cont<alt)
          {
            for(x = 0; x<espaco; x++)  // parte que cuida dos espacamentos do lado esquerdo
            {
              printf(" ");
            }

            for(x = 0; x<=cont; x++)  // parte que cuida da geração da Imagem
            {
              printf(" #");
            }

            printf("\n");
            espaco=espaco-1;
            cont=cont+1;
          }
        }
        else  // caso valor de um dos lados seja maior que 26 exibe a mensagem
        {
          printf("A imagem não pode ser gerada quando o valor de um dos lados é maior que 26.\n");
        }
        printf("\n\n=-=-=-=-=-=-=-=-=-=-=-=[ [][][] ]=-=-=-=-=-=-=-=-=-=-=-=\n\n");

      break;


      /******************* Triângulo Retângulo (catetos iguais) *********************/
      case 4:

        b=0; 
        area=0;  // reset de todas as variaveis utilizadas na conta
        cont=0;
        espaco=28;
        c1=0;
        c2=0;

        printf("\n\n=-=-=-=-[ Triângulo Retângulo (catetos iguais) ]-=-=-=-=\n\n");

        while(b<=0)  // proteçao contra valor menor ou igual a 0
        {
          printf("\nDigite o valor de um cateto:\n");
          scanf("%lf",&b);
        }

        c1=pow(b,2);  // calculo da hipotenusa
        c2=pow(b,2);
        hi=sqrt(c1+c2);
        area=(b*b)/2;

        printf("\n\n=-=-=-=-[ Triângulo Retângulo (catetos iguais) ]-=-=-=-=\n\n");
        printf("\nHipotenusa: %lf",hi);
        printf("\nÁrea da figura: %lf",area);
        printf("\nPerímetro da figura: %lf\n\n\n",(2*b)+hi);
        printf("=-=-=-=-=-=-=-=-=-=-=-=[ Figura ]=-=-=-=-=-=-=-=-=-=-=-=\n\n");

        if(b<=28)  // gera a imagem apenas se a base valor de um dos lados é menor ou igual a 28
        {
          while(cont<b)
          {
            espaco=28-b;
            
            for(x = 0; x < espaco; x++)  // parte que cuida dos espacamentos do lado esquerdo
            {
              printf(" ");
            }

            for(x = 0; x<=cont; x++)  // parte que cuida da geração da Imagem
            {
              printf(" #");
            }
            printf("\n");
            cont=cont+1;
          }
        }
        else  // caso valor de um dos lados seja maior que 28 exibe a mensagem
        {
          printf("A imagem não pode ser gerada quando o valor do cateto é maior que 28.\n");
        }
        printf("\n\n=-=-=-=-=-=-=-=-=-=-=-=[ [][][] ]=-=-=-=-=-=-=-=-=-=-=-=\n\n");

      break;


      /******************* Losango *********************/
      case 5:

        c1=0;
        c2=0; 
        area=0;
        cont=0;
        espaco=28;  // reset de todas as variaveis utilizadas na conta
        per=0;
        espaco=28;
        alt=0;

        printf("\n\n-=-=-=-=-=-=-=-=-[ Trapézio isósceles ]-=-=-=-=-=-=-=-=-\n\n");

        while(b1<=0)
        {
          printf("\nDigite o valor da base menor do trapézio:\n");
          scanf("%lf",&b1);
        }
        while(b2<=0)
        {
          printf("\nDigite o valor da base maior do trapézio:\n");
          scanf("%lf",&b2);
        }
        while(alt<=0)
        {
          printf("\nDigite a altura do trapézio:\n");
          scanf("%lf",&alt);
        }

        system("clear");

        printf("\n\n-=-=-=-=-=-=-=-=-[ Trapézio isósceles ]-=-=-=-=-=-=-=-=-\n\n");

        if(b1==b2 && b1==alt)  // aviso caso as bases tenham o mesmo valor
        {
          printf("\nAtenção isto não é um trapézio, mas sim um quadrado\n");
        }

        if(b1==b2 && b1!=alt)  // aviso caso as bases tenham o mesmo valor
        {
          printf("\nAtenção isto não é um trapézio, mas sim um retangulo\n");
        }

        area=((b1+b2)*alt)/2;

        c1=pow(b1,2);  // calculo da hipotenusa
        c2=pow(b2,2);
        hi=sqrt(c1+c2);

        printf("\nÁrea da figura: %lf",area);
        printf("\nPerímetro da figura: %lf\n\n\n",b1+b2+(2*hi));
        printf("\nValor da hipotenusa (lados onde não foi dado os valores): %lf\n\n\n",hi);
        printf("=-=-=-=-=-=-=-=-=-=-=-=[ Figura ]=-=-=-=-=-=-=-=-=-=-=-=\n\n");

        if(b2<=28)  // gera a imagem apenas se o valor base maior é menor ou igual a 28
        {
          espaco=espaco-b1;
          cont=b1;
          while(alt>0)
          {

            for(x = 0; x<espaco; x++)  // parte que cuida dos espacamentos do lado esquerdo
            {
              printf(" ");
            }

            for(x = 0; x<cont; x++)  // parte que cuida da geração da Imagem
            {
              printf(" #");
            }

            printf("\n");
            espaco=espaco-1;
            cont=cont+1;
            alt=alt-1;
          }
        }
        else  // caso valor da base maior seja maior que 28 exibe a mensagem
        {
          printf("A imagem não pode ser gerada quando o valor de um dos lados é maior que 26.\n");
        }
        printf("\n\n=-=-=-=-=-=-=-=-=-=-=-=[ [][][] ]=-=-=-=-=-=-=-=-=-=-=-=\n\n");

      break;
    }
  }
  printf("\n\n=-=-=-=-=-=-=-=-[ Programa  Finalizado ]-=-=-=-=-=-=-=-=\n\n");
  return 0;
}

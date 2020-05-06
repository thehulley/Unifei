#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 Wendel N. - 2020022457
*/

/*******************************************************Codigo ainda incompleto*********************************************************/

int main()
{
  int c, opcao, x, cont, espaco, sair, quant, salv, men, per;
  double b, alt, area, c1, c2, hi, b1, b2, lad, bpro;
  char n[9];  // string especificamente para proteger todo o programa contra letras/caracteres

  double areaqua=0, bqua=0;  /*Variaveis para salvar o quadrado*/

  double arearet=0, bret=0, altret=0;  /*Variaveis para salvar o retangulo*/

  double areaequ=0, bequ=0, altequ=0, c1equi=0, c2equi=0, hiequi=0;  /*Variaveis para salvar o triangulo equi*/

  double area3ret=0, b3ret=0, alt3ret=0, c13ret=0, c23ret=0, hi3ret=0;  /*Variaveis para salvar o triangulo ret*/

  double areatra = 0, b1tra = 0, b2tra = 0, alttra = 0, c1tra = 0, c2tra = 0, hitra = 0;  /*Variaveis para salvar o trapezio*/

  system("clear");  // limpa o "flood" caso teste em linux
  quant=0;

  while(opcao!=6)
  {

    c=0;
    opcao=0;

    printf("\n\n");

    while ((opcao<1) || (opcao>7))   // Repetiçao para impedir entrada de valores que não estão na lista
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
          printf("## 1 - Quadrado                                       ##\n## 2 - Retângulo                                      ##\n## 3 - Triângulo Equilátero                           ##\n## 4 - Triângulo Retângulo (catetos iguais)           ##\n## 5 - Trapézio Retângulo                             ##\n");
        } 

        if(c==8)
        {
          printf("## 6 - Sair do programa                               ##\n## 7 - Figuras salvas                                 ##\n");
        }
        c = c+1;
      }


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
          scanf("%s",n);
          printf("\n\nCaracter ou numero inserido - (%s)\n",n);
          b=atoi(n);  // depois a string é convertida em int(caso o dado inserido seja uma letra/palavra/caracter especial a conversão considera esse dado como 0, fazendo assim com que o programa não trave)
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

            for(x = 0; x < b; x++)  // parte que cuida da geração da Imagem
            {
              printf(" #");
            }
            printf("\n");
            cont=cont+1;
          }
        }
        else  // caso a base seja maior que 28 exibe a mensagem
        {
          printf("A imagem não pode ser gerada pois o valor digitado para a base é maior que 28.\n");
        }
        printf("\n\n=-=-=-=-=-=-=-=-=-=-=-=[ [][][] ]=-=-=-=-=-=-=-=-=-=-=-=\n\n");


        salv=0;  // define como valor de salv 0 para que caia na repetição

        while(salv<1 || salv>2)  // proteção contra valores diferentes de 1 e 2
        {
          printf("Deseja salvar esta figura?  (1 - Sim / 2 - Não)\n");  
          scanf("%s",n);
          salv=atoi(n);  // depois a string é convertida em int(caso o dado inserido seja uma letra/palavra/caracter especial a conversão considera esse dado como 0, fazendo assim com que o programa não trave)
        }

        if(salv==1)  // salva a figura
        {
          printf("\nA Figura foi salva, para acessa-la escolha a opção 5 no menu principal\n");
          quant=quant+1;

          areaqua=area;  // atribuição de variaveis necessarias para o salvamento
          bqua=b;

        }
        else  // "deleta" a figura
        {
          printf("\nA Figura não foi salva\n");
        }
        
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
          scanf("%s",n);
          printf("\n\nCaracter ou numero inserido - (%s)\n",n);
          b=atoi(n);  // depois a string é convertida em int(caso o dado inserido seja uma letra/palavra/caracter especial a conversão considera esse dado como 0, fazendo assim com que o programa não trave)
        }

        while(alt<=0)  // proteçao contra valor menor ou igual a 0
        {
          printf("\nDigite o valor da altura:\n");
          scanf("%s",n);
          printf("\n\nCaracter ou numero inserido - (%s)\n",n);
          alt=atoi(n);  // depois a string é convertida em int(caso o dado inserido seja uma letra/palavra/caracter especial a conversão considera esse dado como 0, fazendo assim com que o programa não trave)
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

        if(alt<=26 && b<=26)  // gera a imagem apenas se a base e altura menor que 28
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
        else  // caso a base e altura maior que 28 exibe a mensagem
        {
          printf("A imagem não pode ser gerada quando o valor da base ou altura é maior que 28.\n");
        }
        printf("\n\n=-=-=-=-=-=-=-=-=-=-=-=[ [][][] ]=-=-=-=-=-=-=-=-=-=-=-=\n\n");
      
        
        salv=0;  // define como valor de salv 0 para que caia na repetição

        while(salv<1 || salv>2)  // proteção contra valores diferentes de 1 e 2
        {
          printf("Deseja salvar esta figura?  (1 - Sim / 2 - Não)\n");  
          scanf("%s",n);
          printf("\n\nCaracter ou numero inserido - (%s)\n",n);
          salv=atoi(n);  // depois a string é convertida em int(caso o dado inserido seja uma letra/palavra/caracter especial a conversão considera esse dado como 0, fazendo assim com que o programa não trave)
        }

        if(salv==1)  // salva a figura
        {
          printf("\nA Figura foi salva, para acessa-la escolha a opção 5 no menu principal\n");
          quant=quant+1;

          arearet = area;  // atribuição de variaveis necessarias para o salvamento
          bret = b;
          altret = alt;

        }
        else  // "deleta" a figura
        {
          printf("\nA Figura não foi salva\n");
        }

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
          scanf("%s",n);
          printf("\n\nCaracter ou numero inserido - (%s)\n",n);
          b=atoi(n);  // depois a string é convertida em int(caso o dado inserido seja uma letra/palavra/caracter especial a conversão considera esse dado como 0, fazendo assim com que o programa não trave)
        }

        area=(pow(b,2)*sqrt(3))/4;  // calculo da area
        c1=pow(b,2);
        c2=pow((b/2),2);
        alt=floor(sqrt(c1+c2));

        printf("\n\n=-=-=-=-=-=-=-=-[ Triângulo Equilátero ]-=-=-=-=-=-=-=-=\n\n");
        printf("\nÁrea da figura: %lf",area);
        printf("\nPerímetro da figura: %lf\n\n\n",b*3);
        printf("=-=-=-=-=-=-=-=-=-=-=-=[ Figura ]=-=-=-=-=-=-=-=-=-=-=-=\n\n");

        if(b<=26)  // gera a imagem apenas se a base é menor ou igual a 26
        {
          while(cont<alt)
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
          }
        }
        else  // se valor da base maior que 26 exibe a mensagem
        {
          printf("A imagem não pode ser gerada quando o valor de um dos lados é maior que 26.\n");
        }
        printf("\n\n=-=-=-=-=-=-=-=-=-=-=-=[ [][][] ]=-=-=-=-=-=-=-=-=-=-=-=\n\n");


        salv=0;  // define como valor de salv 0 para que caia na repetição

        while(salv<1 || salv>2)  // proteção contra valores diferentes de 1 e 2
        {
          printf("Deseja salvar esta figura?  (1 - Sim / 2 - Não)\n");  
          scanf("%s",n);
          printf("\n\nCaracter ou numero inserido - (%s)\n",n);
          salv=atoi(n);  // depois a string é convertida em int(caso o dado inserido seja uma letra/palavra/caracter especial a conversão considera esse dado como 0, fazendo assim com que o programa não trave)
        }

        if(salv==1)  // salva a figura
        {
          printf("\nA Figura foi salva, para acessa-la escolha a opção 5 no menu principal\n");
          quant=quant+1;

          areaequ = area;
          bequ = b;
          altequ = alt;  // atribuição de variaveis necessarias para o salvamento
          c1equi = c1;
          c2equi = c2;
          hiequi = hi;

        }
        else  // "deleta" a figura
        {
          printf("\nA Figura não foi salva\n");
        }


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
          scanf("%s",n);
          printf("\n\nCaracter ou numero inserido - (%s)\n",n);
          b=atoi(n);  // depois a string é convertida em int(caso o dado inserido seja uma letra/palavra/caracter especial a conversão considera esse dado como 0, fazendo assim com que o programa não trave)
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

        if(b<=28)  // gera a imagem apenas se a base (cateto) é menor ou igual a 28
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
        else  // se base (cateto) maior que 28 exibe a mensagem
        {
          printf("A imagem não pode ser gerada quando o valor do cateto é maior que 28.\n");
        }
        printf("\n\n=-=-=-=-=-=-=-=-=-=-=-=[ [][][] ]=-=-=-=-=-=-=-=-=-=-=-=\n\n");

        salv=0;  // define como valor de salv 0 para que caia na repetição

        while(salv<1 || salv>2)  // proteção contra valores diferentes de 1 e 2
        {
          printf("Deseja salvar esta figura?  (1 - Sim / 2 - Não)\n");  
          scanf("%s",n);
          printf("\n\nCaracter ou numero inserido - (%s)\n",n);
          salv=atoi(n);  // depois a string é convertida em int(caso o dado inserido seja uma letra/palavra/caracter especial a conversão considera esse dado como 0, fazendo assim com que o programa não trave)
        }

        if(salv==1)  // salva a figura
        {
          printf("\nA Figura foi salva, para acessa-la escolha a opção 5 no menu principal\n");
          quant=quant+1;

          area3ret = area;
          b3ret = b;
          alt3ret = alt;  // atribuição de variaveis necessarias para o salvamento
          c13ret = c1;
          c23ret = c2;
          hi3ret = hi;

        }
        else  // "deleta" a figura
        {
          printf("\nA Figura não foi salva\n");
        }

      break;


      /******************* Trapézio Retângulo *********************/
      case 5:

        alt=0;
        area=0;  // reset de todas as variaveis utilizadas na conta
        b1=0;
        b2=0;
        bpro=0;
        hi=0;

        printf("\n\n=-=-=-=-=-=-=-=-=-[ Trapézio Retângulo ]-=-=-=-=-=-=-=-=-=\n\n");

        while(b1<=0)  // proteção contra valores menores que 0
        {
          printf("\nDigite o valor da base menor do trapézio\n");
          scanf("%s",n);
          printf("\n\nCaracter ou numero inserido - (%s)\n",n);
          b1=atoi(n);  // depois a string é convertida em int(caso o dado inserido seja uma letra/palavra/caracter especial a conversão considera esse dado como 0, fazendo assim com que o programa não trave)
        }
        while(b2<=0)  // proteção contra valores menores que 0
        {
          printf("\nDigite o valor da base maior do trapézio:\n");
          scanf("%s",n);
          printf("\n\nCaracter ou numero inserido - (%s)\n",n);
          b2=atoi(n);  // depois a string é convertida em int(caso o dado inserido seja uma letra/palavra/caracter especial a conversão considera esse dado como 0, fazendo assim com que o programa não trave)

          if(b2<=b1)  // proteção contra bases iguais ou 'base menor' > 'base maior'
          {
            while(b2<=b1)
            {
              printf("\nO valor digitado para a 'base maior' deve ser maior e diferente do que foi digitado para a 'base menor'\n");
              scanf("%s",n);
              printf("\n\nCaracter ou numero inserido - (%s)\n",n);
              b2=atoi(n);  // depois a string é convertida em int(caso o dado inserido seja uma letra/palavra/caracter especial a conversão considera esse dado como 0, fazendo assim com que o programa não trave)
            }
          }
        }
        while(alt<=0)  // proteção contra valores menores que 0
        {
          printf("\nDigite o valor da altura do trapézio:\n");
          scanf("%s",n);
          printf("\n\nCaracter ou numero inserido - (%s)\n",n);
          alt=atoi(n);  // depois a string é convertida em int(caso o dado inserido seja uma letra/palavra/caracter especial a conversão considera esse dado como 0, fazendo assim com que o programa não trave)
        }

        bpro=(b2-b1);
        c1=pow(bpro,2);  // calculo da hipotenusa
        c2=pow(alt,2);
        hi=sqrt(c1+c2);

        area=((b1+b2)*alt)/2;

        printf("\n\n=-=-=-=-=-=-=-=-=-[ Trapézio Retângulo ]-=-=-=-=-=-=-=-=-=\n\n");
        printf("\nHipotenusa: %lf",hi);
        printf("\nÁrea da figura: %lf",area);
        printf("\nPerímetro da figura: %lf\n\n\n", b1+b2+hi+alt);
        printf("=-=-=-=-=-=-=-=-=-=-=-=[ Figura ]=-=-=-=-=-=-=-=-=-=-=-=\n\n");
        printf("Atenção, a figura abaixo é meramente ilustrativa e seus dados não condizem com a conta acima\n\n");

        cont=b1;

        if(b2<=28)  // gera a imagem apenas se o valor da 'base maior' é menor ou igual a 28
        {
          while(cont<b2)
          {
            espaco=28-b1;
            
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
        else  // se o valor da 'base maior' é maior que 28 exibe a mensagem
        {
          printf("A imagem não pode ser gerada quando o valor da 'base maior' é maior que 28.\n");
        }

        printf("\n\n=-=-=-=-=-=-=-=-=-=-=-=[ [][][] ]=-=-=-=-=-=-=-=-=-=-=-=\n\n");

        salv=0;  // define como valor de salv 0 para que caia na repetição

        while(salv<1 || salv>2)  // proteção contra valores diferentes de 1 e 2
        {
          printf("Deseja salvar esta figura?  (1 - Sim / 2 - Não)\n");  
          scanf("%s",n);
          printf("\n\nCaracter ou numero inserido - (%s)\n",n);
          salv=atoi(n);  // depois a string é convertida em int(caso o dado inserido seja uma letra/palavra/caracter especial a conversão considera esse dado como 0, fazendo assim com que o programa não trave)
        }

        if(salv==1)  // salva a figura
        {
          printf("\nA Figura foi salva, para acessa-la escolha a opção 5 no menu principal\n");
          quant=quant+1;

          areatra = area;
          b1tra = b1;
          b2tra = b2;
          alttra = alt;  // atribuição de variaveis necessarias para o salvamento
          c1tra = c1;
          c2tra = c2;
          hitra = hi;

        }
        else  // "deleta" a figura
        {
          printf("\nA Figura não foi salva\n");
        }

      break;


      /******************* Figuras salvas *********************/
      
      case 7:

        system("clear");

        if(quant==0)  // proteção para o usuario nao acessar a "aba" quando não ha figuras salvas
        {
          printf("\n\n-=-=-=-=-=-=-=-=-=-[ Figuras salvas ]-=-=-=-=-=-=-=-=-=-\n\n");
          printf("\n\nNenhuma figura foi salva ainda, realize uma operação\n\n");
          printf("\n\n-=-=-=-=-=-=-=-=-=-[ Figuras salvas ]-=-=-=-=-=-=-=-=-=-\n\n");

        }
        else
        {
          printf("\n===================[ Figuras salvas ]===================\n");

          /*Inicio da exibição das figuras salvas*/

          /*Ultimo quadrado salvo*/
          /*areaqua / bqua - Variaveis do quadrado*/

          printf("\n■■■■■■■■■■■■■■■■■■■[ Quadrado salvo ]■■■■■■■■■■■■■■■■■■■\n\n");
          printf("\nÁrea da figura: %lf",areaqua);
          printf("\nPerímetro da figura: %lf\n\n\n",bqua*4);
          printf("=-=-=-=-=-=-=-=-=-=-=-=[ Figura ]=-=-=-=-=-=-=-=-=-=-=-=\n\n");
          
          cont=0;

          if(bqua<=28)  // gera a imagem apenas se base menor que 28
          {
            while(cont<bqua)
            {
              espaco=28-bqua;

              for(x = 0; x < espaco; x++)  // parte que cuida dos espacamentos do lado esquerdo
              {
                printf(" ");
              }    

              for(x = 0; x < bqua; x++)  // parte que cuida da geração da Imagem
              {
                printf(" #");
              }
              printf("\n");
              cont=cont+1;
            }
          }
          else  // caso a base maior que 28 exibe a mensagem
          {
            printf("A imagem não pode ser gerada pois o valor digitado para a base é maior que 28.\n");
          }
          printf("\n\n■■■■■■■■■■■■■■■■■■■■■■■[ [][][] ]■■■■■■■■■■■■■■■■■■■■■■■\n\n");
          /*Fim*/


          /*Ultimo retangulo salvo*/
          /*arearet, bret, altret / Variaveis do retangulo*/

          printf("\n\n■■■■■■■■■■■■■■■■■■[ Retângulo salvo ]■■■■■■■■■■■■■■■■■■\n\n");

          if(alt==b)  // aviso caso base tenha o mesmo valor da altura
          {
            printf("\nAtenção isto não é um retangulo, mas sim um quadrado\n");
          }

          printf("\nÁrea da figura: %lf",arearet);
          printf("\nPerímetro da figura: %lf\n\n\n",(bret*2)+(altret*2));
          printf("=-=-=-=-=-=-=-=-=-=-=-=[ Figura ]=-=-=-=-=-=-=-=-=-=-=-=\n\n");

          cont=0;

          if(altret<=26 || bret<=26)  // gera a imagem apenas se base menor que 28
          {
            while(cont<altret)
            {
              espaco=28-bret;
            
              for(x = 0; x < espaco; x++)  // parte que cuida dos espacamentos do lado esquerdo
              {
                printf(" ");
              }

              for(x = 0; x<bret; x++)  // parte que cuida da geração da Imagem
              {
                printf(" #");
              }
              printf("\n");
              cont=cont+1;
            }
          }
          else  // caso base maior que 28 exibe a mensagem
          {
            printf("A imagem não pode ser gerada quando o valor da base ou altura é maior que 28.\n");
          }
            printf("\n\n■■■■■■■■■■■■■■■■■■■■■■■[ [][][] ]■■■■■■■■■■■■■■■■■■■■■■■\n\n");

          /*Fim*/


          /*Ultimo triangulo equi salvo*/
          /*areaequ, bequ, altequ, c1equi, c2equi, hiequi / Variaveis do triangulo equi*/

          printf("\n\n■■■■■■■■■■■■■■[ Triângulo Equilátero salvo ]■■■■■■■■■■■■■■\n\n");
          printf("\nÁrea da figura: %lf",areaequ);
          printf("\nPerímetro da figura: %lf\n\n\n",bequ*3);
          printf("=-=-=-=-=-=-=-=-=-=-=-=[ Figura ]=-=-=-=-=-=-=-=-=-=-=-=\n\n");

          cont=0;
          espaco=28;

          if(bequ<=26)  // gera a imagem apenas se base é menor ou igual a 26
          {
            while(cont<altequ)
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
            }
          }
          else  // se base maior que 26 exibe a mensagem
          {
            printf("A imagem não pode ser gerada quando o valor de um dos lados é maior que 26.\n");
          }
          printf("\n\n■■■■■■■■■■■■■■■■■■■■■■■[ [][][] ]■■■■■■■■■■■■■■■■■■■■■■■\n\n");

          /*Fim*/


          /*Ultimo triangulo ret salvo*/
          /*area3ret, b3ret, alt3ret, c13ret, c23ret, hi3ret / Variaveis do triangulo ret*/

          printf("\n\n■■■■■■■■■■■■■■[ Triângulo Retangulo salvo ]■■■■■■■■■■■■■■\n\n");
          printf("\nHipotenusa: %lf",hi3ret);
          printf("\nÁrea da figura: %lf",area3ret);
          printf("\nPerímetro da figura: %lf\n\n\n",(2*b3ret)+hi3ret);
          printf("=-=-=-=-=-=-=-=-=-=-=-=[ Figura ]=-=-=-=-=-=-=-=-=-=-=-=\n\n");

          cont=0;

          if(b3ret<=28)  // gera a imagem apenas se a base é menor ou igual a 28
          {
            while(cont<b3ret)
            {
              espaco=28-b3ret;
            
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
          else  // se base maior que 28 exibe a mensagem
          {
            printf("A imagem não pode ser gerada quando o valor do cateto é maior que 28.\n");
          }
          printf("\n\n■■■■■■■■■■■■■■■■■■■■■■■[ [][][] ]■■■■■■■■■■■■■■■■■■■■■■■\n\n");

          /*Fim*/


          /*Ultimo trapezio salvo*/
          /*areatra, b1tra, b2tra, alttra, c1tra, c2tra, hitra / Variaveis para salvar o trapezio*/

          printf("\n\n■■■■■■■■■■■■■■[ Triângulo Retangulo salvo ]■■■■■■■■■■■■■■\n\n");
          printf("\nHipotenusa: %lf",hitra);
          printf("\nÁrea da figura: %lf",areatra);
          printf("\nPerímetro da figura: %lf\n\n\n", b1tra+b2tra+hitra+alttra);
          printf("=-=-=-=-=-=-=-=-=-=-=-=[ Figura ]=-=-=-=-=-=-=-=-=-=-=-=\n\n");
          printf("Atenção, a figura abaixo é meramente ilustrativa e seus dados não condizem com a conta acima\n\n");

          cont=b1tra;

          if(b2tra<=28)  // gera a imagem apenas se 'base maior' menor ou igual a 28
          {
            while(cont<b2tra)
            {
              espaco=28-b1tra;
            
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
          else  // se 'base maior' maior que 28 exibe a mensagem
          {
            printf("A imagem não pode ser gerada quando o valor da 'base maior' é maior que 28.\n");
          }

          printf("\n\n■■■■■■■■■■■■■■■■■■■■■■■[ [][][] ]■■■■■■■■■■■■■■■■■■■■■■■\n\n");

          /*Fim*/

          printf("Para sair digite qualquer numero\n\n");
          scanf("%d",&sair);

          printf("\n\n===================[ Figuras salvas ]===================\n\n");

        }

      break;
    }
  }

  printf("\n\n=-=-=-=-=-=-=-=-[ Programa  Finalizado ]-=-=-=-=-=-=-=-=\n\n");
  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
  int M[2][2], R[2][2], opcao, c, i, j, numero, maior, numeros;
  char n[21];

  opcao = 0;        // Inicialização do while
  maior = -100;   

  srand (time(NULL));        // Utilizado em conjunto com o gerador de numeros, inicializa o gerador de numeros

  while ((opcao < 1) || (opcao) > 2)        // Proteção do menu
  {
    printf ("Escolha uma das opções abaixo\n\n1 - Gerar numeros para cada posição da matriz\n2 - Digitar os numeros da matriz (valor com no maximo 20 caracteres)\n\n");
    scanf ("%s", n);

    opcao = atoi(n);        // Proteção contra letras
  }

  system ("clear");

  switch (opcao)
  {
    case 1:
      for (c=0 ; c<2 ; c++)
      {
        for (i=0 ; i<2 ; i++)
        {
          numero = (rand() % 100);        // Atribui um numero aleatorio a variavel numero
          printf ("%d - [%d,%d] = %d\n", c+1, c+1, i+1, numero);
          M[c][i] = numero;
          
          if (M[c][i] > maior)        // Verificação para identificar o maior valor da matriz
          {
            maior = M[c][i];
          }
        }
      }

      printf("\n\nO maior numero da matriz é o %d\n\n", maior);

      for (c=0 ; c<2 ; c++)
      {
        for (i=0 ; i<2 ; i++)
        {
          R[c][i] = (M[c][i] * maior);        // Atribui a matriz R[][] o valor da matriz M[][] multiplicado pelo maior numero da matriz (variavel maior)
        }
      }

      for (c=0 ; c<2 ; c++)       // Parte que imprime a matriz R[][]
      {
        for (i=0 ; i<2 ; i++)
        {
          printf("\n[%d][%d] = %d x %d = %d", c+1, i+1, M[c][i], maior, R[c][i]);
        }
      }
    break;

    case 2:
      for (c=0 ; c<2 ; c++)
      {
        for (i=0 ; i<2 ; i++)
        {
          numeros = 0;
          
          printf ("\nDigite um numero para a posição [%d][%d]\nAtenção caracteres diferentes de numeros serão considerados como 0\n", c+1, i+1);
          scanf ("%s", n);

          numeros = strlen(n);        // Conta quantos caracteres a string n possui, para realzar uma proteção
          
          if (numeros > 20)       // Proteção contra strings com mais de 20 caracteres (limite da char n)
          {
            while (numeros > 20)
            {
              printf("\nAtenção esse numero inteiro possui mais de 20 caracteres,\nPor favor digite outro numero\n");
              scanf ("%s", n);
              numeros = strlen(n);
            }
          }

          M[c][i] = atoi (n);       // Transforma de string para inteiro, assim letras e caracteres especiais não entram na matriz

          if (M[c][i] > maior)        // Verificação para identificar o maior valor da matriz
          {
            maior = M[c][i];
          }
        }
      }

      printf("\n\nO maior numero da matriz é o %d\n\n", maior);

      for (c=0 ; c<2 ; c++)
      {
        for (i=0 ; i<2 ; i++)
        {
          R[c][i] = (M[c][i] * maior);        // Atribui a matriz R[][] o valor da matriz M[][] multiplicado pelo maior numero da matriz (variavel maior)
        }
      }

      for (c=0 ; c<2 ; c++)       // Parte que imprime a matriz R[][]
      {
        for (i=0 ; i<2 ; i++)
        {
          printf("\n[%d][%d] = %d x %d = %d", c+1, i+1, M[c][i], maior, R[c][i]);
        }
      }
    break;  
  }
  printf ("\n\nPrograma Finalizado\n\n");
  return 0;
}

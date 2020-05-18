#include <stdio.h>
#include <stdlib.h>

int main()
{
  int c, aluno, q, opcao, pont, resultado[10][2], apro, cadastrado;
  char resposta, n[999999], gabarito[8];

  opcao = 0;
  system ("clear");

  /*****Parte que cuida do gabarito*****/
  while (opcao != 1)
  {
    opcao = 0;
    printf ("-=-=-=-=-[ Gabarito ]-=-=-=-=-\n");

    for (q=0 ; q<8 ; q++)
    {
      printf ("\nResposta da %dº questão\n", q+1);
      scanf(" %c", &resposta);

      gabarito[q] = resposta;
    }

    printf ("\n\n-=-=-=-=-[ Confirmação ]-=-=-=-=-\n\n");
    
    for (q=0 ; q<8 ; q++)
    {
      printf ("\nResposta da %dº questão - %c\n", q+1, gabarito[q]);
    }

    while ((opcao < 1) || (opcao > 2))
    {
      printf ("\n\n-=-=-=-=-[ Confirmação ]-=-=-=-=-\n\nAs respostas do gabarito acima estão corretas?    (1 - SIM / 2 - NÃO)\n");
      scanf ("%s", n);

      opcao = atoi(n);
    }
  }

  printf ("\n\nGabarito cadastrado com sucesso!\n\n");
  
  /*****Fim*****/


  /*****Parte que cuida das pontuações dos alunos*****/

  for (c=0 ; c<=10 ; c++)
  {
    resultado[c][0] = -1;
    resultado[c][1] = 0;
  }

  for (c=1 ; c<=10 ; c++)
  {
    pont = 0;

    printf ("\n\n");

    printf ("\n\nDigite o numero do aluno\n");
    scanf ("%d", &aluno);

    for (q=0; q<=10 ; q++)
    {
      if (aluno == resultado[q][0])
      {
        while (aluno == resultado[q][0])
        {
          printf("\n\nAluno já cadastrado\nVerifique o numero e digite novamente\n");
          scanf ("%s", n);

          aluno = atoi(n);
        }
      }
    }

    for (q=0; q<8 ; q++)
    {
      printf ("\n\n-=-=-=-=-[ Aluno (%d) - Questão (%d) ]-=-=-=-=-\n\nDigite a resposta do aluno\n", aluno, q+1);
      scanf(" %c", &resposta);
    
      if (resposta == gabarito[q])
      {
        pont = pont + 1;
      }

      printf ("\n%c | %c | %d\n", resposta, gabarito[q], pont);
    }

    resultado[c][0] = aluno;
    resultado[c][1] = pont;

    printf ("\n\nForam cadastradas as respostas do aluno %d \n\n", aluno);
  }

  /*****Fim*****/


  /*****Parte que cuida dos resultados*****/

  apro = 0;

  for (c=1 ; c<=10 ; c++)
  {
    if (resultado[c][1] >= 6)
    {
      apro = apro + 1;
    }
  }

  printf ("\n\n-=-=-=-=-[ Resultados ]-=-=-=-=-\n\n");

  for (c=1 ; c<=10 ; c++)
  {
    printf ("O aluno %d obteve nota [%d]\n", resultado[c][0], resultado[c][1]);
  }

  printf ("\nHouve %d%% de aprovação\n\n", (apro * 100)/10);
  
  /*****Fim*****/

  return 0;
}

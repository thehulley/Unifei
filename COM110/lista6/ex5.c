#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int c, i, n, letras, a;
  char palavra[129], alfabeto[27] = " abcdefghijklmnopqrstuvwxyz", p[3];        // O espaço existente no vetor alfabeto[] ocupa a posição [0] do vetor, assim essa posição é excluida

  printf ("\n\n-=-=-=-=-=-=-=-[ Alfabeto utilizado ]-=-=-=-=-=-=-=-\n\n(a b c d e f g h i j k l m n o p q r s t u v w x y z)\n\n");

  printf ("Digite uma palavra\n");
  scanf ("%s", palavra);

  n = 27;

  while ((n < -26) || (n > 26))       // Proteção contra letras e caracteres especiais
  {
    printf ("\nDigite o numero de posições        (O numero de posições deve ser maior ou igual -26 e menor ou igual a 26)\n");
    scanf ("%s", p);
    
    n = atoi(p);
  }

  letras = strlen(palavra);       // Conta quantas letras tem a palavra, pois o numero de letras sera utilizado posteriormente

  printf ("\nEssa palavra tem %d letras", letras);
  printf ("\n\n\n\n-=-=-=-=-=-=-=-[ Palavra digitada ]-=-=-=-=-=-=-=-\n\n%s", palavra);
  printf ("\n\n-=-=-=-=-=-=-[ Palavra criptografada ]-=-=-=-=-=-=-\n\n");

  for (c=letras ; c>0 ; c--)        // Move todos os valores uma casa acima, "excluindo" assim o valor do vetor na posição 0
  {
    palavra[c] = palavra[c - 1];
  }

  palavra[0] = ' ';       // O espaço é atribuido a palavra[0], para exclui-lo como no caso do vetor alfabeto[]

  if (n > 0)        // Se a deslocação for para numeros positivos cai nesta sentença
  {
    for (c=1 ; c<=letras ; c++)       // O valor de C corresponde a "casa" do vetor palavra[] (Ex: C=1 é palavra[1])
    {
      for (i=1 ; i<=26 ; i++)       // O valor de I corresponde a "casa" do vetor alfabeto[] (Ex: C=1 é palavra[1])
      {
        if (palavra[c] == alfabeto[i])        // Testa todos os valores de alfabeto[i] para palavra[c], logo testa todas as letras do alfabeto até achar a mesma que esta no vetor palavra[c]
        {
          if ((i + n) > 26)       // Testa se a soma de i com n resulta em maior que 26, se acontecer faz a operação abaixo
          {
            printf ("%c", alfabeto[(i + n) - 26]);
          }
          else        // Se não acontecer exibe normalmente o valor de i+n (que resulta na posição final já adicionada a deslocação)
          {
            printf ("%c", alfabeto[i+n]);
          }
        }
      }
    }
  }
  else if (n < 0)        // Se a deslocação for para numeros negativos cai nesta sentença
  {
    for (c=1 ; c<=letras ; c++)
    {
      for (i=1 ; i<=26 ; i++)
      {
        if (palavra[c] == alfabeto[i])
        {
          if (i + n < 0)       // Testa se a soma de i com n resulta em menor que 0, se acontecer faz a operação abaixo
          {
            printf ("%c", alfabeto[26 + (i + n)]);
          }
          else if (i + n == 0)       // Testa se a soma de i com n resulta em 0, como na posição 0 temos o espaço então não podemos exibi-lo pulando assim de volta para o valor 26
          {
            printf ("%c", alfabeto[26]); 
          }
          else        // Se não acontecer exibe normalmente o valor de i+n (que resulta na posição final já adicionada a deslocação)
          {
            printf ("%c", alfabeto[i + n]);
          }
        }
      }
    }
  }
  else        // Se não houver deslocação (caso N=0) cai nesta sentença
  {
    for (c=1 ; c<=letras ; c++)
    {
      printf ("%c", palavra[c]);
    }
  }

  printf ("\n\n");

  return 0;
}

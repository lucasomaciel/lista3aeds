/*Uma agência bancária possui vários clientes que podem fazer investimentos com rendimentos mensais,
conforme a tabela a seguir:
TIPO    DESCRIÇÃO               RENDIMENTO MENSAL
1       Poupança                1,5%
2       Poupança plus           2%
3       Fundos de renda fixa    4%
Faça um programa que leia o código do cliente, o tipo do investimento e o valor investido, e que calcule
e mostre o rendimento mensal de acordo com o tipo do investimento. No final, o programa deverá mostrar
o total investido e o total de juros pagos.
A leitura terminará quando o código do cliente digitado for menor ou igual a 0 */

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
  setlocale(LC_ALL,"português-br");

    //data input
    int tipo;

    printf("Selecione entre as opções a baixo qual simulação de investimento deseja fazer.\n1)Poupança.\n2)Poupança Plus.\n3)Renda Fixa.\nPara finalizar o programa, digite qualquer número inteiro menor ou igual a 0.\n");

    scanf("%d", &tipo);

    //processing data and data output
    if (tipo <= 0) {
      printf("Você finalizou o programa.\nObrigado por utilizá-lo!\n");
      return 0;
    }
    else if (tipo == 1) {
      double capitalInicial;
      double juros;
      double capitalFinal;
      printf("Digite quanto deseja investir.\n");
      scanf("%lf", &capitalInicial);

      juros = capitalInicial * 0.015;

      capitalFinal = capitalInicial + juros;

      printf("Após um investimento de %.2lf, você obteve um rendimento equivalente à %.2lf.\nO valor resgatado será de %.2lf.", capitalInicial, juros, capitalFinal);
    }
    else if (tipo == 2) {
      double capitalInicial;
      double juros;
      double capitalFinal;
      printf("Digite quanto deseja investir.\n");
      scanf("%lf", &capitalInicial);

      juros = capitalInicial * 0.02;

      capitalFinal = capitalInicial + juros;

      printf("Após um investimento de %.2lf, você obteve um rendimento equivalente à %.2lf.\nO valor resgatado será de %.2lf.", capitalInicial, juros, capitalFinal);
    }
    else if (tipo == 3) {
      double capitalInicial;
      double juros;
      double capitalFinal;
      printf("Digite quanto deseja investir.\n");
      scanf("%lf", &capitalInicial);

      juros = capitalInicial * 0.04;

      capitalFinal = capitalInicial + juros;

      printf("Após um investimento de %.2lf, você obteve um rendimento equivalente à %.2lf.\nO valor resgatado será de %.2lf.", capitalInicial, juros, capitalFinal);
    }
    else {
      printf("Erro: Digite uma das opções descritas.\n");
      return 0;
    }

    return 0;
}
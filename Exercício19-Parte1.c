/*Faça um programa que receba o tipo da ação, ou seja, uma letra a ser comercializada na bolsa de valores,
o preço de compra e o preço de venda de cada ação e que calcule e mostre:
■ o lucro de cada ação comercializada;
■ a quantidade de ações com lucro superior a R$ 1.000,00;
■ a quantidade de ações com lucro inferior a R$ 200,00;
■ o lucro total da empresa.
Finalize com o tipo de ação ‘F’.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
  setlocale(LC_ALL,"english");

    //data input
    int quantShares;
    int quantBigProfit = 0;
    int quantSmallProfit = 0;
    double profitA;
    double profitB;
    double profitC;
    double profitD;
    double profitE;
    double profitF;


    printf("Type the quantity of shares negociated.\n");
    scanf("%d", &quantShares);

    //processing data
    for (int i = 0; i < quantShares; i++) {
      char company;
      double buyPrice;
      double sellPrice;
      double profit;

      printf("Type the company letter, for how much you bought and for how much you sold your share.\n");
      scanf("%s %lf %lf", &company, &buyPrice, &sellPrice);

      profit = sellPrice - buyPrice;

      printf("The profit you got from this share is equal to %.2lf.\n", profit);

      if (profit > 1000) {
        quantBigProfit++;
      }
      
      if (profit < 200) {
        quantSmallProfit++;
      }

      if (company == 'A') {
        profitA += profit;
      }
      else if (company == 'B') {
        profitB += profit;
      }
      else if (company == 'C') {
        profitC += profit;
      }
      else if (company == 'D') {
        profitD += profit;
      }
      else if (company == 'E') {
        profitE += profit;
      }
      else if (company == 'F') {
        profitF += profit;
      }
    }

    //data output
    printf("The quantity of shares with a profit superior of 1000 is equal to %d.\n", quantBigProfit);
    printf("The quantity of shares with a profit inferior of 200 is equal to %d.\n", quantSmallProfit);
    printf("The total profit of Company A is equal to %lf.\n", profitA);
    printf("The total profit of Company B is equal to %lf.\n", profitB);
    printf("The total profit of Company C is equal to %lf.\n", profitC);
    printf("The total profit of Company D is equal to %lf.\n", profitD);
    printf("The total profit of Company E is equal to %lf.\n", profitE);
    printf("The total profit of Company F is equal to %lf.\n", profitF);


    return 0;
}
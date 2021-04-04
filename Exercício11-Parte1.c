/*Faça um programa que receba o valor de um carro e mostre uma tabela com os seguintes dados: preço
final, quantidade de parcelas e valor da parcela. Considere o seguinte:
■ o preço final para compra à vista tem desconto de 20%;
■ a quantidade de parcelas pode ser: 6, 12, 18, 24, 30, 36, 42, 48, 54 e 60; e
■ os percentuais de acréscimo encontram-se na tabela a seguir. 
(tabela no livro, página 147/148 - questão 11*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
    setlocale(LC_ALL,"english");

    //data input
    float price;
    int numberPayments;

    printf("Type the price of your car in US Dollars. \n");
    scanf("%f", &price);
    printf("Type the number os payments you want to make to pay it. Possibilities: 1, 6, 12, 18, 24, 30, 36, 42, 48, 54 and 60 payments.\n");
    scanf("%d", &numberPayments);

    //processing data
    if (numberPayments == 1) {
      price *= 0.8;
    }
    else if (numberPayments == 6) {
      price *= 1.03;
    }
    else if (numberPayments == 12) {
      price *= 1.06;
    }
    else if (numberPayments == 18) {
      price *= 1.09;
    }
    else if (numberPayments == 24) {
      price *= 1.12;
    }
    else if (numberPayments == 30) {
      price *= 1.15;
    }
    else if (numberPayments == 36) {
      price *= 1.18;
    }
    else if (numberPayments == 42) {
      price *= 1.21;
    }
    else if (numberPayments == 48) {
      price *= 1.24;
    }
    else if (numberPayments == 54) {
      price *= 1.27;
    }
    else if (numberPayments == 60) {
      price *= 1.3;
    }
    else {
      printf("Type a number of payments out of the possible ones described.");
      return 0;
    } 

    //data output
    printf("If paid in %d payments, the total price of the car will be %.2f USD.", numberPayments, price);

    return 0;
}
/*Faça um programa que receba um conjunto de valores inteiros e positivos, calcule e mostre o maior e o
menor valor do conjunto. Considere que:
■ para encerrar a entrada de dados, deve ser digitado o valor zero;
■ para valores negativos, deve ser enviada uma mensagem;
■ os valores negativos ou iguais a zero não entrarão nos cálculos. */

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
  setlocale(LC_ALL,"english");

    //data input
    int quantNumbers;
    int number[quantNumbers];
    int big;
    int small;

    printf("Type in how many numbers compose your group.\n");
    scanf("%d", &quantNumbers);

    if (quantNumbers <= 0) {
      printf("Your group of numbers can't have 0 or negative ammounts.\n");
      return 0;
    }

    //processing data
    printf("Enter the %d elements in your group.\nThe program only accepts positive and different to 0 numbers.\n", quantNumbers);
    for (int i = 0; i < quantNumbers; i++) {
      scanf("%d", &number[i]);
      if (number[i] <= 0) {
        printf("Only positive numbers and different to 0 are accepted.");
        return 0;
      }
    }

    big = number[0];

    for (int i = 1; i < quantNumbers; i++) {
        if(big < number[i]) {
          big = number[i]; 
        }
    }

    small = number[0];

    for (int i = 1; i < quantNumbers; i++) {
        if(small > number[i]) {
          small = number[i]; 
        }
    }

    //data output
    printf("The largest element in the group is %d.\n", big);
    printf("The smallest element in the group is %d.\n", small);


    return 0;
}
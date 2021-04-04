/*Faça um programa que receba dez números inteiros e mostre a quantidade de números primos dentre os
números que foram digitados.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
  setlocale(LC_ALL,"english");

    //data input
    int i = 0;
    int number[10];
    int quantityPrimes = 0;
    int div= 0;

    //processing data
    printf("Type ten whole numbers.\n");
    while (i < 10) {
      scanf("%d", &number[i]);
      for (int j = 1; j <= number[i]; j++) {
        if (number[i] % j == 0) {
          div++;
        }
      }
      if (div == 2) {
        quantityPrimes++;
        div = 0;
          }
      i++;
    }

    //data output
  printf("The total number of prime numbers is equal to %d.\n", quantityPrimes);

    return 0;
}
/*Faça um programa que receba dez números, calcule e mostre a soma dos números pares e a soma dos
números primos.*/

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
    int sumPairs = 0;
    int sumPrimes = 0;
    int div= 0;

    printf("Type ten whole numbers.\n");
    while (i < 10) {
      scanf("%d", &number[i]);
      if (number[i] % 2 == 0) {
        sumPairs += number[i];
      }
      for (int j = 1; j <= number[i]; j++) {
        if (number[i] % j == 0) {
          div++;
          if (div == 2) {
          sumPrimes += number[i];
          div = 0;
        }
        }
      }
      i++;
    }
    //data output
  printf("The sum of all pair numbers is equal to %d\n", sumPairs);
  printf("The sum of all prime numbers is equal to %d\n", sumPrimes);

    return 0;
}
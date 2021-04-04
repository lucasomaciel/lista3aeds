/*Faça um programa que receba várias idades, calcule e mostre a média das idades digitadas. Finalize digitando idade igual a zero.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
  setlocale(LC_ALL,"english");

    //data input
    int numberOfAges;
    int sumOfAges = 0;

    printf("How many ages do you want to type in?\n");
    scanf("%d", &numberOfAges);

    //processing data
    for (int i = 0; i < numberOfAges; i++) {
      int age;
      printf("Type the age and press enter.\n");
      scanf("%d", &age);
      sumOfAges += age;
      age = 0;
    }

    double media = sumOfAges/numberOfAges;

    //data output
    printf("The media of the ages typed is equal to %0.f.", media);

    return 0;
}
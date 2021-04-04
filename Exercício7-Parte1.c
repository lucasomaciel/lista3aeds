/*Faça um programa que receba a idade, a altura e o peso de cinco pessoas, calcule e mostre:
■ a quantidade de pessoas com idade superior a 50 anos;
■ a média das alturas das pessoas com idade entre 10 e 20 anos;
■ a porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas. */

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
    setlocale(LC_ALL,"english");

    //data input
  float age[5];
  float height[5];
  float weight[5];
  int olderThan50 = 0;
  float quantityHeight1020 = 0.0, totalHeight = 0.0, quantityHeight = 0.0;
  float under40kg = 0.0;


  for (int i = 0; i < 5; i++) {
    printf("Type consecutively your age in years, you height in meters and your weight in kilograms. \n");
    scanf("%f %f %f", &age[i], &height[i], &weight[i]);
      if ((age[i] >= 50)) {
        olderThan50++;
      }
      if ((age[i] >= 10) && (age[i] <= 20)) {
        totalHeight += height[i];
        quantityHeight++;
      }
      if (weight[i] < 40) {
        under40kg++;
      }
  }
    //data output
  printf("The number of persons older than 50 years is equal to %d.\n", olderThan50);
  printf("The media of the height of people aged from 10 to 20 years old is equal to %f.\n", totalHeight/quantityHeight);
  printf("The percentage of people that weights less than 40 kilograms is equal to %f%%.", (under40kg/5));

    return 0;
}
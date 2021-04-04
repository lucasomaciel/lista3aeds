/*Cada espectador de um cinema respondeu a um questionário no qual constava sua idade e sua opinião
em relação ao filme: ótimo — 3; bom — 2; regular — 1. Faça um programa que receba a idade e a opinião de quinze espectadores, calcule e mostre:
■ a média das idades das pessoas que responderam ótimo;
■ a quantidade de pessoas que responderam regular; e
■ a percentagem de pessoas que responderam bom, entre todos os espectadores analisados. */

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
  setlocale(LC_ALL,"english");

  //data input
  int age[15];
  int opinion[15];
  int sumAgesGreat = 0;
  int quantAgesGreat = 0;
  int quantRegular = 0;
  int quantGood = 0;

  //processing
  printf("Type your age and what was your opinion about the movie, as described below:\n1) Regular.\n2) Good.\n3) Great.\n");
  for (int i = 0; i < 15; i++) {
    scanf("%d %d", &age[i], &opinion[i]);
    if ((opinion[i] < 1) && (opinion[i] > 3)) {
      printf("You can only describe your opinion whit the numbers 1, 2 and 3.");
      return 0;
    }
    if (opinion[i] == 3) {
      sumAgesGreat += age[i];
      quantAgesGreat++;
    }
    if (opinion[i] == 1) {
      quantRegular++;
    }
    if (opinion[i] == 2) {
      quantGood++;
    }    
  }

  //data output
  printf("The media age of people who thought the movie was great is equal to %d.", (sumAgesGreat/quantAgesGreat));
  printf("The quantity of people that thought the movie was regular is equal to %d.", quantRegular);
  printf("The percentage of people that thought the movie was good is equal to %f%%.", (100*(quantGood/15.0)));

    return 0;
}

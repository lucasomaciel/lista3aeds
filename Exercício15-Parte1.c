/*Uma empresa fez uma pesquisa de mercado para saber se as pessoas gostaram ou não de um novo produto lançado. Para isso, forneceu o sexo do entrevistado e sua resposta (S — sim; ou N — não). Sabe-se
que foram entrevistadas dez pessoas. Faça um programa que calcule e mostre:
■ o número de pessoas que responderam sim;
■ o número de pessoas que responderam não;
■ o número de mulheres que responderam sim; e
■ a percentagem de homens que responderam não, entre todos os homens analisados. */

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
  setlocale(LC_ALL,"english");

  //data input
  char gender[10];
  char opinion[10];
  int quantYes = 0;
  int quantNo = 0;
  int quantWomenYes = 0;
  int quantMenNo = 0;
  int quantMen = 0;

  printf("Type down below your gender (M for masculine and F for feminine) and your opinion about our ner product (S for yes and N for no).\n");

  //processing
  for (int i = 0; i < 10; i++) {
    scanf("%s %s", &gender[i], &opinion[i]);
    
    if (opinion[i] == 'S') {
      quantYes++;
    }
    else if (opinion[i] == 'N') {
      quantNo++;
    }
    
    if ((gender[i] == 'F') && (opinion[i] == 'S')) {
      quantWomenYes++;
    }
    else if ((gender[i] == 'M') && (opinion[i] == 'N')) {
      quantMenNo++;
    }
    
    if (gender[i] == 'M') {
      quantMen++;
    }
  }

  double percentageMenNo = (quantMenNo/quantMen)*100;
  
  //data output
  printf("The number of people that answered yes is equal to %d.\n", quantYes);
  printf("The number of people that answered no is equal to %d.\n", quantNo);
  printf("The number of women that answered yes is equal to %d.\n", quantWomenYes);
  printf("The percentage of men that answered no out of all men that participated on the survey is equal to %2.f%%.\n", percentageMenNo);

    return 0;
}
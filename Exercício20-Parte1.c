/*Faça um programa que apresente o menu de opções a seguir:
Menu de opções:
1. Média aritmética
2. Média ponderada
3. Sair
Digite a opção desejada.
Na opção 1: receber duas notas, calcular e mostrar a média aritmética.
Na opção 2: receber três notas e seus respectivos pesos, calcular e mostrar a média ponderada.
Na opção 3: sair do programa.
Verifique a possibilidade de opção inválida. Nesse caso, o programa deverá mostrar uma mensagem.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
  setlocale(LC_ALL,"english");

    //data input
    int command;

    printf("Welcome to the program. What do you want to do?\n1)Arithmetic Average.\n2)Weighted Average.\n3)Leave the Program.\n");
    scanf("%d", &command);

    //processing data and data output
    if (command == 1) {
      double grade1;
      double grade2;
      double arithmeticAverage;
      printf("Type two grades.\n");
      scanf("%lf %lf", &grade1, &grade2);
      arithmeticAverage = (grade1 + grade2)/2.0;
      printf("The Arithmetic Average of the two described grades is equal to %.2lf.\n", arithmeticAverage);
      return 0;
    }
    else if (command == 2) {
      double grade1;
      double weight1;
      double grade2;
      double weight2;
      double grade3;
      double weight3;
      double weightedAverage;
      printf("Type each grade and their respective weight, consecutively. For each time you type a grade and a weight, press enter.\n");
      scanf("%lf %lf", &grade1, &weight1);
      scanf("%lf %lf", &grade2, &weight2);
      scanf("%lf %lf", &grade3, &weight3);
      weightedAverage = ((grade1 * weight1)+(grade2 * weight2)+(grade3 * weight3))/(weight1 + weight2 + weight3);
      printf("The Weighted Average of the three grades is equal to %.2lf.\n", weightedAverage);
      return 0;
    }
    else if (command == 3) {
      printf("Thanks for using the program.");
      return 0;
    }
    else {
      printf("Type a possible command out of the described ones (1, 2 and 3).");
      return 0;
    }


    return 0;
}
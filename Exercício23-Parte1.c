/*Faça um programa que apresente o menu de opções a seguir, que permita ao usuário escolher a opção
desejada, receba os dados necessários para executar a operação e mostre o resultado. Verifique a possibilidade de opção inválida e não se preocupe com as restrições como salário inválido.
Menu de opções:
1. Novo salário
2. Férias
3. Décimo terceiro
4. Sair
Digite a opção desejada.
Na opção 1: receber o salário de um funcionário, calcular e mostrar o novo salário usando as regras a seguir:
SALÁRIOS                    PERCENTAGEM DE AUMENTO
Até R$ 210,00                        15%
De R$ 210,00 a R$ 600,00 (inclusive) 10%
Acima de R$ 600,00                    5%
Na opção 2: receber o salário de um funcionário, calcular e mostrar o valor de suas férias. Sabe-se que as
férias equivalem a seu salário acrescido de um terço do salário.
Na opção 3: receber o salário de um funcionário e o número de meses de trabalho na empresa, no máximo
doze, calcular e mostrar o valor do décimo terceiro. Sabe-se que o décimo terceiro equivale a seu salário
multiplicado pelo número de meses de trabalho dividido por 12.
Na opção 4: sair do programa.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
  setlocale(LC_ALL,"english");

    //data input
    int menuOptions;

    printf("Select the option from the menu below.\n1)Calculate new salary.\n2)Calculate vacation bonus.\n3)Calculate 13th salary/Holiday Bonus.\n4)Exit program.\n");
    scanf("%d", &menuOptions);

    //processing data and data output
    if (menuOptions == 1) {
      double salary;
      printf("Type in your salary.\n");
      scanf("%lf", &salary);
      if (salary < 210) {
        salary *= 1.15;
      }
      else if ((salary >= 210) && (salary <= 600)) {
        salary *= 1.10;
      }
      else {
        salary *= 1.05;
      }
      printf("Your new salary will be %.2lf.\n", salary);
      return 0;
    }
    else if (menuOptions == 2) {
      double salary;
      double vacationBonus;
      printf("Type in your salary.\n");
      scanf("%lf", &salary);
      vacationBonus = (salary * 4.0)/3.0;
      printf("You will receive %.2lf as your vacation bonus.\n", vacationBonus);
      return 0;
    }
    else if (menuOptions == 3) {
      double salary;
      double monthsWorked;
      double thirteenthSalary;
      printf("Type in your salary and how many months you worked this year.\n");
      scanf("%lf %lf", &salary, &monthsWorked);
      if ((monthsWorked < 1) && (monthsWorked > 12)) {
        printf("You can't type a number lower than 1 and bigger than 12 for how many months you worked.\n");
        return 0;
      }
      thirteenthSalary = (salary * monthsWorked)/12.0;
      printf("You will receive %.2lf as your holiday bonus.\n", thirteenthSalary);
    }
    else if (menuOptions == 4) {
      printf("You exited the program. Thanks for using!\n");
      return 0;
    }
    else {
      printf("Error: command nonexistent. Type a number from 1 to 4.\n");
      return 0;
    }
    return 0;
}
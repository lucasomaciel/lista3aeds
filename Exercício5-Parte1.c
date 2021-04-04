/*Faça um programa que mostre as tabuadas dos números de 1 a 10. */

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
    setlocale(LC_ALL,"english");

    //data input
    int number = 1;
    while (number < 11) {
    //processing
      int i = 0;
      int result;

      while (i < 11) {
      result = number * i;
    //data output
      printf("%d x %d = %d. \n", number, i, result);
      i++;
      }
      number++;
    }
    return 0;
}
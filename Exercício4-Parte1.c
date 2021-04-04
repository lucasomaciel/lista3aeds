/*Faça um programa que receba um número, calcule e mostre a tabuada desse número. */

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
    setlocale(LC_ALL,"english");

    //data input
    int number;

    printf("Type a number so you can see the result of itself multiplied by 0 to 10. \n");
    scanf("%d", &number);
   
    //processing
    int i = 0;
    int result;

    while (i < 11) {
      result = number * i;
    //data output
      printf("%d multiplied by %d is equal %d. \n", number, i, result);
      i++;
    }
    
    return 0;
}
/*Faça um programa que leia cinco grupos de quatro valores (A, B, C, D) e mostre-os na ordem lida. Em seguida, organize-os em ordem crescente e decrescente.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
    setlocale(LC_ALL,"english");

    //data input
    int i = 1;
    while (i < 6) {
      int a, b, c, d;
      printf("Type four number for group %d: ", i);
      scanf("%d %d %d %d", &a, &b, &c, &d);

    //processing
      int y = 0;
      int order;
      /*int order will be used temporary to order the numbers. the program will repeat the commands 3 times so all the values are organized in an increasing order.*/
      while (y < 3) {
        if (a > b) {
          order = a;
          a = b;
          b = order;
        }
        if (b > c) {
          order = b;
          b = c;
          c = order;
        }
        if (c > d) {
          order = c;
          c = d;
          d = order;
        }
        y++;
      }
    //data output
      printf("The numbers in increasing order:\n %d, %d, %d, %d\n", a, b, c, d);
      printf("The numbers in decreasing order:\n %d, %d, %d, %d\n", d, c, b, a);
      i++;
    }
    return 0;
}

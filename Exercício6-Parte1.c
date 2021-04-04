/*. Uma loja utiliza o código V para transação à vista e P para transação a prazo. Faça um programa que receba
o código e o valor de quinze transações, calcule e mostre:
■ o valor total das compras à vista;
■ o valor total das compras a prazo;
■ o valor total das compras efetuadas; e
■ o valor da primeira prestação das compras a prazo juntas, sabendo-se que serão pagas em três vezes. */

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
    setlocale(LC_ALL,"english");

    //data input
    float value;
    char code;
    int i = 0;
    float totalCash = 0;
    float totalDeferred = 0;
    float firstPayment;

    while (i < 15) {
      printf("Type the value of the product and the code corresponding to how it is going to be paid, considering V for cash and P for deferred payment: \n");
      scanf("%f %s", &value, &code);

      if (code == 'V') {
        totalCash += value;
        i++;
      }
      else if (code == 'P') {
        totalDeferred += value;
        firstPayment = value/3.0;
        printf("The first - and subsequent - payment(s) due to next month will be equal %f.\n", (float)firstPayment);
        i++;
      }
      else {
        printf("Error: type V or P as the codes.");
      }
    }
    //data output
    printf("The total value of cash and deferred payments are, consecutively, equal to %f and %f. The total value spent is equal to %f.", totalCash, totalDeferred, (totalCash + totalDeferred));

    return 0;
}
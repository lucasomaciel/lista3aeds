/*Em uma eleição presidencial existem quatro candidatos. Os votos são informados por meio de código.
Os códigos utilizados são:
1, 2, 3, 4) Votos para os respectivos candidatos
5) Voto nulo
6) Voto em branco
Faça um programa que calcule e mostre:
■ o total de votos para cada candidato;
■ o total de votos nulos;
■ o total de votos em branco;
■ a porcentagem de votos nulos sobre o total de votos; e
■ a porcentagem de votos em branco sobre o total de votos.
Para finalizar o conjunto de votos, tem-se o valor zero e, para códigos inválidos, o programa deverá
mostrar uma mensagem.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
  setlocale(LC_ALL,"english");

    //data input
    int totalPeople;
    int totalVotes1 = 0;
    int totalVotes2 = 0;
    int totalVotes3 = 0;
    int totalVotes4 = 0;
    int totalNullVotes = 0;
    int totalBlankVotes = 0;

    printf("Type the total number of people voting.\n");
    scanf("%d", &totalPeople);

    //processing data
    for (int i = 0; i < totalPeople; i++) {
      int vote;
      printf("Type the code for your vote, as described below:\n1, 2, 3 and 4) Candidates.\n5)Null Vote.\n6)Blank Vote.\n");
      scanf("%d", &vote);
      if (vote == 1) {
        totalVotes1++;
      }
      else if (vote == 2) {
        totalVotes2++;
      }
      else if (vote == 3) {
        totalVotes3++;
      }
      else if (vote == 4) {
        totalVotes4++;
      }
      else if (vote == 5) {
        totalNullVotes++;
      }
      else if (vote == 6) {
        totalBlankVotes++;
      }
      else {
        printf("Type a possible number out of the described ones.\n");
        return 0;
      }
      vote = 0;
    }

    double pctNulls, pctBlanks;

    pctNulls = 100*((float)totalNullVotes/(float)totalPeople);
    pctBlanks = 100*((float)totalBlankVotes/(float)totalPeople);

    //data output
    printf("Candidate 1 was voted %d times.\n", totalVotes1);
    printf("Candidate 2 was voted %d times.\n", totalVotes2);
    printf("Candidate 3 was voted %d times.\n", totalVotes3);
    printf("Candidate 4 was voted %d times.\n", totalVotes4);
    printf("There were %d null votes.\n", totalNullVotes);
    printf("There were %d blank votes.\n", totalBlankVotes);
    printf("The percentage of null votes corresponds to %.2lf%%.", pctNulls);
    printf("The percentage of blank votes corresponds to %.2lf%%.", pctBlanks);

    return 0;
}
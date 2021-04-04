/*Foi feita uma pesquisa sobre a audiência de canal de TV em várias casas de uma cidade, em determinado
dia. Para cada casa consultada foi fornecido o número do canal (4, 5, 7, 12) e o número de pessoas que
estavam assistindo àquele canal. Se a televisão estivesse desligada, nada era anotado, ou seja, essa casa
não entrava na pesquisa. Faça um programa que:
■ leia um número indeterminado de dados (número do canal e número de pessoas que estavam assistindo); e
■ calcule e mostre a porcentagem de audiência de cada canal.
Para encerrar a entrada de dados, digite o número do canal ZERO.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
  setlocale(LC_ALL,"english");

    //data input
    int numberTVs;
    double audienceChanel4 = 0.0;
    double audienceChanel5 = 0.0;
    double audienceChanel7 = 0.0;
    double audienceChanel12 = 0.0;
    double totalAudience = 0.0;

    printf("Type the number of TVs that were on.\n");
    scanf("%d", &numberTVs);

    //processing data
    for (int i = 0; i < numberTVs; i++) {
      int tvChanel;
      int peopleWatchin;
      printf("Type the chanel and the ammount of people that were watching.\n");
      scanf("%d %d", &tvChanel, &peopleWatchin);
      if (tvChanel == 4) {
        audienceChanel4 += peopleWatchin;
        totalAudience += peopleWatchin;
      }
      else if (tvChanel == 5) {
        audienceChanel5 += peopleWatchin;
        totalAudience += peopleWatchin;
      }
      else if (tvChanel == 7) {
        audienceChanel7 += peopleWatchin;
        totalAudience += peopleWatchin;
      }
      else if (tvChanel == 12) {
        audienceChanel12 += peopleWatchin;
        totalAudience += peopleWatchin;
      }
      else {
        printf("Type one of the possible chanels (4, 5, 7 and 12).\n");
        return 0;
      }
      tvChanel = 0;
      peopleWatchin = 0;
    }

    double pctAudience4;
    double pctAudience5;
    double pctAudience7;
    double pctAudience12;

    pctAudience4 = 100*(audienceChanel4/totalAudience);
    pctAudience5 = 100*(audienceChanel5/totalAudience);
    pctAudience7 = 100*(audienceChanel7/totalAudience);
    pctAudience12 = 100*(audienceChanel7/totalAudience);

    //data output
    printf("The percentage of people watching Chanel 4 was %.2f%%.\n", pctAudience4);
    printf("The percentage of people watching Chanel 5 was %.2f%%.\n", pctAudience5);
    printf("The percentage of people watching Chanel 7 was %.2f%%.\n", pctAudience7);
    printf("The percentage of people watching Chanel 12 was %.2f%%.\n", pctAudience12);

    return 0;
}
#include<stdio.h>
#include <stdlib.h>
#include <time.h>	
int main(void)
{
        int arr[1000];
        int dice[6] = { 0, };
        srand((unsigned)time(NULL));
        for (int i = 0; i < 1000; i++)
        {
               arr[i] = rand() % 6 + 1;
        }
        for (int i = 0; i < 1000; i++)
        {
               switch (arr[i])
               {
               case 1:
                       dice[0]++;
                       break;
               case 2:
                       dice[1]++;
                       break;
               case 3:
                       dice[2]++;
                       break;
               case 4:
                       dice[3]++;
                       break;
               case 5:
                       dice[4]++;
                       break;
               case 6:
                       dice[5]++;
                       break;
               }
        }
        for (int i = 1; i < 7; i++)
        {
               printf("주사위를 돌릴 때 %d 눈금이 나올 확률은:%g %%\n", i, (double)(dice[i-1] / 10.0));
        }
        return 0;
 }

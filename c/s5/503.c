#include <stdio.h>
#define D_PER_W 7

int main(void)
{
        int day0;
        int week,day;
        printf("please enter the num of days:\n");
        scanf("%d", &day0);
        while (day0 > 0)
        {
                week = day0 / D_PER_W;
                day = day0 % D_PER_W;
                printf("%d days are %d weeks, %d days.\n", day0, week, day);
                printf("the next?(enter a num <= 0 to quit)\n");
                scanf("%d", &day0);
        }

        return 0;
}

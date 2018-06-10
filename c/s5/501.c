#include <stdio.h>
#define M_PER_H 60

int main(void)
{
        int min;
        int mint, hour;

        printf("please enter the time:(in m)\n");
        scanf("%d", &min);
        while(min > 0)
        {
                hour = min / M_PER_H;
                mint = min % M_PER_H;
                printf("the input is %d h %d m.\n", hour, mint);
                printf("the next?(enter a number < 0 to quit)\n");
                scanf("%d", &min);
        }

        return 0;
}

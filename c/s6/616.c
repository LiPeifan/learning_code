#include <stdio.h>

int main(void)
{
        double money = 100;
        int count;

        for(count = 1; money > 0; count++)
        {
                money = (money * 1.08) - 10;
        }
        count--;
        printf("it spent him %d years to clear his account.\n", count);

        return 0;
}

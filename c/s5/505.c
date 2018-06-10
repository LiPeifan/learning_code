#include <stdio.h>

int main(void)
{
        int num;
        int sum = 0;
        int count = 0;
        printf("please enter a final number: ");
        scanf("%d", &num);
        while (count++ < num)
                sum = sum + count;
        printf("sum = %d.\n", sum);

        return 0;
}

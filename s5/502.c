#include <stdio.h>

int main(void)
{
        int num;
        int num_plus_10;
        printf("please enter an number:\n");
        scanf("%d", &num);
        num_plus_10 = num + 10;
        while (num <= num_plus_10)
        {
                printf("%d\t", num);
                num++;
        }
        printf("\n");

        return 0;
}

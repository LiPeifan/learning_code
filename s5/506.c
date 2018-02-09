#include <stdio.h>

int main(void)
{
        int num;
        int count = 0;
        int produt = 0;
        printf("please enter a final number: ");
        scanf("%d", &num);
        while (count++ < num)
                produt =produt + count * count;
        printf("the sum is %d\n", produt);

        return 0;
}

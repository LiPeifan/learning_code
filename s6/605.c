#include <stdio.h>

int main(void)
{
        int min, max;

        printf("请输入表的上限和下限:\n");
        printf("下限:");
        scanf("%d", &min);
        printf("上限:");
        scanf("%d", &max);
        printf("n       平方    立方\n");
        while ( min <= max)
        {
                printf("%d\t%d\t%d\n", min, min * min, min * min * min);
                min++;
        }

        return 0;
}

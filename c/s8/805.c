#include <stdio.h>

int main(void)
{
        int guess = 50;
        int upper = 100;
        int lower = 0;
        char choice;

        printf ("请在0~100之间选择一个数字。\n");
        printf ("它是50吗？\n");
        printf ("a)比它大       b)比他小\nc)是的\n");
        while ((choice = getchar()) != 'c'){
                if (choice == 'a')
                        lower = guess;
                else if (choice == 'b')
                        upper = guess;
                else {
                        printf ("请输入正确的选项。\n");
                        continue;
                }
                guess = (lower + upper) / 2;
                printf ("它是%d吗？\n", guess);
                printf ("a)比它大       b)比他小\nc)是的\n");
        }

        return 0;
}

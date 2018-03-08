#include <stdio.h>

int main(void)
{
        char ch;
        int words, num;
        words = num = 0;

        while ((ch = getchar()) != EOF){
                if (ch == '\n')
                        continue;
                if (ch == ' '){
                        words++;
                        continue;
                }
                else
                        num++;
        }

        printf ("单词的平均字母数为：%.2lf.\n", (double)num / words);

        return 0;
}

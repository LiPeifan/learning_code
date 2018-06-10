# include<stdio.h>

int main(void)
{
        char ch;
        int snum, lnum, onum;//snum: 空格数 lnum: 换行符数 onum: 其他字符数
        snum = lnum = onum = 0;
        while ((ch = getchar()) != '#'){
                if (ch == '\n')
                        lnum++;
                else if (ch == ' ')
                        snum++;
                else
                        onum++;
        }
        printf ("空格数为%d 换行符数为%d 其他字符为%d.\n", snum, lnum, onum);

        return 0;
}

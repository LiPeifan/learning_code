#include <stdio.h>

int main(void)
{
        char ch;
        int count = 0;

        while ((ch = getchar() )!= EOF){
                count++;
                if (ch == '\n')
                        printf ("\\n");
                else if (ch == '\t')
                        printf ("\\t");
                else
                        printf ("%c  %d  ", ch, ch);
                if (count % 10 == 0)
                        printf ("\n");
        }

        return 0;
}

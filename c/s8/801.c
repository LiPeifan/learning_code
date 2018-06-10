#include <stdio.h>
int main(void)
{
        int ch;
        int count = 0;
        printf ("please enter some characters:\n");

        while ((ch = getchar()) != EOF){
                if (ch == '\n' || ch == ' ')
                        continue;
                count++;
        }
        printf ("there are %d characters in the iuput.\n", count);

        return 0;
}

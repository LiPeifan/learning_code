#include <stdio.h>

int main(void)
{
        char ch, prech;
        prech = '0';
        int count = 0;

        while ((ch = getchar()) != '#'){
                if (ch == 'i' && prech == 'e')
                        count++;
                prech = ch;
        }
        printf ("ei出现的次数为%d.\n", count);

        return 0;
}

#include <stdio.h>

int main(void)
{
        char letter[26];
        char ch = 'a';
        for(int n = 0; n < 26; n++ )
        {
                letter[n] = ch;
                ch++;
        }
        int n = 0;
        while(n < 26)
        {
                printf("%c\t", letter[n]);
                n++;
        }

        return 0;
}

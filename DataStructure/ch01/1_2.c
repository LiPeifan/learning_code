#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int f(char *, char);

int main()
{
    char * str = (char *)malloc(100);
    char ch;
    int t;
    //scanf("%s\n", str);
    gets(str);
    scanf("%c", &ch);
    t = f(str, ch);
    printf("t = %d\n", t);
}

int f(char * x, char y)
{
    int i = 0, flag = 0;
    while(x[i] != '\0')
    {
        if(y == x[i])
        {
            flag = 1;
            break;
        }
        i++;
    }
    return flag;
}

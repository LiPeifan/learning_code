#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int func(char * str);

int main()
{
    char * str;
    str = (char *)malloc(sizeof(char));
    int flag;
    printf("输入一个字符串：");
    scanf("%s", str);
    flag = func(str);

    if(flag == 0)
        printf("NO\n");
    else
        printf("YES\n");
}

int func(char * str)
{
    int i, j, flag;
    int t = strlen(str);
    for(i = 0, j = t -1; i <= t/2; i++, j--)
    {
        if(str[i] == str[j])
            continue;
        else
        {
            flag = 0;
            break;
        }
    }
    if(i >= t/2)
        flag = 1;
    return flag;
}

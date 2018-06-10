# include<stdio.h>
# include<string.h>

int main(void)
{
        char name[20];
        printf("please enter your name:");
        scanf("%s", name);
        printf("a: \"%s\"\n", name);
        printf("b: \"%20s\"\n", name);
        printf("c: \"%-20s\"\n", name);
        printf("d: \"   %s\"\n", name);

        int lenth;
        lenth = strlen(name) + 3;
        printf("d: \"%*s\"\n", lenth, name);

        return 0;
}

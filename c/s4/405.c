# include<stdio.h>
# include<string.h>

int main(void)
{
        char first_name[10], last_name[10];
        int len1, len2;

        printf("please enter your first name:");
        scanf("%s", first_name);
        printf("please enter your last name:");
        scanf("%s", last_name);

        len1 = strlen(first_name);
        len2 = strlen(last_name);

        printf("%s %s\n%*d %*d\n", first_name, last_name, len1, len1, len2, len2);
        printf("%s %s\n%-*d %-*d\n", first_name, last_name, len1, len1, len2, len2);

        return 0;
}

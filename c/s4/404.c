# include<stdio.h>

int main(void)
{
        char name[20];
        double heigh;

        printf("please enter your name:");
        scanf("%s", name);
        printf("please enter your heigh:");
        scanf("%lf", &heigh);
        printf("%s, you are %.3lf feet tall.\n", name, heigh/12);

        return 0;
}

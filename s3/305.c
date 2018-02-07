#include <stdio.h>

int main(void)
{
        int age;

        printf("please enter your age:");
        scanf("%d", &age);
        printf("you has been in the world for %e seconds.\n", age*3.156e7);

        return 0;
}

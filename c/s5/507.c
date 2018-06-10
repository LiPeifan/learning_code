#include <stdio.h>

float cube(float num)
{
        float cube;
        cube = num * num * num;
        return cube;
}

int main(void)
{
        float num;
        printf("please enter a float number: ");
        scanf("%f", &num);
        printf("the number's cube is %f.\n", cube(num));

        return 0;
}

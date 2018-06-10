#include <stdio.h>

#define gallon 3.785
#define meter 1.609

int main(void)
{
        double len, boil;

        printf("请输入行驶的英里和消耗的汽油的加仑数：\n");
        printf("英里数:");
        scanf("%lf", &len);
        printf("加仑数:");
        scanf("%lf", &boil);
        printf("每一百公里消耗的汽油为%.1lf升\n", (boil*gallon*100)/(len*meter));

        return 0;
}

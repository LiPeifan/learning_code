#include <stdio.h>
#include <stdbool.h>

int main(void)
{
        char num;
        int num1, num2, sum1, sum2;
        num1 = num2 = sum1 = sum2 = 0;
        bool isEvenNum;

        while ((num = getchar()) != '0'){
                num -= '0';
                isEvenNum = (num % 2) == 0;
                switch (isEvenNum){
                        case true: num2++;
                                sum2 += num;
                                break;
                        default: num1++;
                                 sum1 += num;
                                 break;
                }
        }
        printf("偶数个数：%d, 奇数个数：%d, 偶数平均数：%lf, 奇数平均数：%lf.\n", num2, num1, (float)sum2 / num2, (float)sum1 / num1);

        return 0;
}

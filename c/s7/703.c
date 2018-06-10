#include <stdio.h>

int main(void)
{
        char num;
        int num1, num2, sum1, sum2;
        num1 = num2 = sum1 = sum2 = 0;

        while ((num = getchar()) != '0'){
                num -= '0';//num减去字符0，ASCII码与原来储存的数字相同
                if (num % 2 == 0){
                        num2++;
                        sum2 += num;
                }
                else{
                        num1++;
                        sum1 += num;
                }
        }
        printf("偶数个数：%d, 奇数个数：%d, 偶数平均数：%lf, 奇数平均数：%lf.\n", num2, num1, (float)sum2 / (float)num2, (float)sum1 / num1);

        return 0;
}

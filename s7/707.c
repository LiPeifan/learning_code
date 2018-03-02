#include <stdio.h>
#define taxrate1 0.15
#define taxrate2 0.2
#define taxrate3 0.25
#define tax1 300 * taxrate1
#define tax2 150 * taxrate2
#define moneyperhour 10.00
#define exterwork 1.5
#define money1 40 * moneyperhour

int main(void)
{
        double time;
        double tax, salary, money;

        printf ("please enter the time you work in hours: \n");
        scanf ("%lf", &time);
        if (time <= 40){
                money = time * moneyperhour;
                if (money <= 300)
                        tax = money * taxrate1;
                else
                        tax = tax1 + (money - 300) * taxrate2;
                salary = money - tax;
        }
        else{
                money = money1 + (time - 40) * exterwork * moneyperhour;
                if (money <= 450)
                        tax = tax1 + (money -300) * taxrate2;
                else
                        tax = tax1 + tax2 + (money - 450) * taxrate3;
                salary = money - tax;
        }
        printf ("工资总额为%.2lf, 税金为%.2lf, 净工资为%.2lf.\n", money, tax, salary);

        return 0;
}

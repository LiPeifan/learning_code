include <stdio.h>

#define lv1 8.75
#define lv2 9.33
#define lv3 10.00
#define lv4 11.20
#define exterwork 1.5
#define taxrate1 0.15
#define taxrate2 0.20
#define taxrate3 0.25
#define tax1 300 * taxrate1
#define tax2 150 * taxrate2
#define money1 40 * moneyperhour
int main(void)
{
        int lv;
        double moneyperhour, time;
        double tax, money, salary;

        printf ("******************************************************************\n");
        printf ("Enter the number correspondings to the desired pay rate or action:\n");
        printf ("1) $8.75/hr\t 2) $9.33/hr\n");
        printf ("3) $10.00/hr\t 4) $11.20/hr\n");
        printf ("5) quit\n");
        printf ("******************************************************************\n");
        scanf ("%d", &lv);
        while (lv != 5){
                switch (lv){
                        case 1: moneyperhour = lv1;
                                break;
                        case 2: moneyperhour = lv2;
                                break;
                        case 3: moneyperhour = lv3;
                                break;
                        case 4: moneyperhour = lv4;
                                break;
                        default: printf ("the number should be 1~5.\n");
                                 goto end;
                                 break;
                }
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
                end: printf ("please enter another number:\n");
                scanf ("%d", &lv);
        }

        return 0;
}
                                                                                                                                                          65,1         底端

#include <stdio.h>
#define limit1 17850
#define limit2 23900
#define limit3 29750
#define limit4 14875
#define rate1 0.15
#define rate2 0.28
#define tax1 limit1 * rate1
#define tax2 limit2 * rate1
#define tax3 limit3 * rate1
#define tax4 limit4 * rate1

int main(void)
{
        int mode;
        double money, tax, limit, tax0;

        printf ("please select your condition:\n");
        printf ("1) single\t 2) householder\n3) marriged\t 4) divorced\n");
        while (scanf ("%d", &mode) == 1){
                switch (mode){
                        case 1: limit = limit1;
                                tax0 = tax1;
                                break;
                        case 2: limit = limit2;
                                tax0 = tax2;
                                break;
                        case 3: limit = limit3;
                                tax0 = tax3;
                                break;
                        case 4: limit = limit4;
                                tax0 = tax4;
                                break;
                        default: printf ("please selest the mode was given!\n");
                                 goto end;
                                 break;
                }
                printf ("please enter your income:\n");
                scanf ("%lf", &money);
                if (money <= limit)
                        tax = money * rate1;
                else
                        tax = tax0 + (money - limit) * rate2;
                printf ("your tax is %.2lf.\n", tax);
                end: printf ("enter another choice(q to quit):\n");
        }
        
        return 0;
}       

#include <stdio.h>
#define ppp1 1.25//ppp:price per pound
#define ppp2 0.65
#define ppp3 0.89 
#define limit1 5
#define limit2 20
#define carriage1 3.50
#define carriage2 10.00
#define carriage3 8
#define carriage3p 0.1
#define discount 0.05

int main(void)
{
	char ch;
	double account_1, account_2, account_3, account;
	double money1, money2, money3;
	double carriage, sum, sumall, discount0;

	printf ("请输入选项选择订购的物品：\n");
	printf ("a) 朝鲜蓟\t b) 甜菜\t c) 胡萝卜\n");

	while ((ch = getchar()) != 'q'){
		if (ch == '\n')
			continue;
		switch (ch){
			case 'a': printf ("请输入朝鲜蓟的磅数：");
				scanf ("%lf", &account_1);
				break;
			case 'b': printf ("请输入甜菜的磅数：");
				scanf ("%lf", &account_2);
				break;
			case 'c': printf ("请输入胡萝卜的磅数：");
				scanf ("%lf", &account_3);
				break;
			default: printf ("it's not an availabled value.\n");
				 break;
		}
		printf ("please select again.(q to quit)\n");
	}
	money1 = account_1 * ppp1;
	money2 = account_2 * ppp2;
	money3 = account_3 * ppp3;
	sum = money1 + money2 + money3;
	account = account_1 + account_2 + account_3;
	if (sum >= 100)
		discount0 = sum * discount;
	else
		discount0 = 0;
	if (account <= 5)
		carriage = carriage1;
	else if (account <= 20)
		carriage = carriage2;
	else
		carriage = carriage3 + account * carriage3p;
	sumall = sum + carriage - discount0;
	printf ("朝鲜蓟每磅的费用为：$%.2lf, 甜菜每磅的费用为：$%.2lf, 胡萝卜每磅的费用为：$%.2lf\n", ppp1, ppp2, ppp3);
	printf ("订购的朝鲜蓟为%.2lf磅，甜菜为%.2lf磅，胡萝卜为%.2lf磅\n", account_1, account_2, account_3);
	printf ("朝鲜蓟的费用为$%.2lf,甜菜的费用为$%.2lf,胡萝卜的费用为$%.2lf\n", money1, money2, money3);	
	printf ("订单的总费用为$%.2lf,折扣为$%.2lf\n", sum, discount0);
	printf ("运输费用为$%.2lf,总费用为$%.2lf\n", carriage, sumall);

	return 0;
}

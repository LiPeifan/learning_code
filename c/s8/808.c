#include <stdio.h>

char getchoice (void);
float check_input (void);
//int check_second_input (void);
float add (void);
float subtract (void);
float multiply (void);
float divide (void);

int main(void)
{
	char choice;

	while ((choice = getchoice()) != 'q'){
		switch (choice){
			case 'a': add();
				  break;
			case 's': subtract();
				  continue;
			case 'm': multiply();
				  continue;
			case 'd': divide();
				  continue;
			default : printf ("please enter the right choice.\n");
				  continue;
		}
	}
	printf ("Bye.\n");

	return 0;
}

char getchoice (void)
{
	char choice;
	printf ("Enter tne operation of your choice:\n");
	printf ("a. add 	s. subtract\n");
	printf ("m. multiply	d. divide\n");
	printf ("q. quit\n");
	choice = getchar();
	while (getchar() != '\n')
		continue;

	return choice;
}

float check_input (void)
{
	float input;
	char ch;

	while (scanf ("%f", &input) == 0){
		while ((ch = getchar()) != '\n')
			putchar(ch);
		printf (" is not a number.");
		printf ("Please enter a number, such as 2.5, 1.78E8, or 3:");
	}
	while (getchar() != '\n')
		continue;

	return input;
}

float add (void)
{
	float first_number, second_number;
	float result;
	printf ("Enter first number:");
	first_number = check_input();
	printf ("Enter second number:");
	second_number = check_input();
	result = first_number + second_number;
	printf ("%f + %f = %f\n", first_number, second_number, result);
	return 0;
}

float subtract (void)
{
	float first_number, second_number;
	float result;
	printf ("Enter first number:");
	first_number = check_input();
	printf ("Enter second number:");
	second_number = check_input();
	result = first_number - second_number;
	printf ("%f - %f = %f\n", first_number, second_number, result);

	return 0;
}

float multiply (void)
{
	float first_number, second_number;
	float result;
	printf ("Enter first number:");
	first_number = check_input();
	printf ("Enter second number:");
	second_number = check_input();
	result = first_number * second_number;
	printf ("%f * %f = %f\n", first_number, second_number, result);

	return 0;
}

float divide (void)
{
	float first_number, second_number;
	float result;
	printf ("Enter first number:");
	first_number = check_input();
	printf ("Enter second number:");
	second_number = check_input();
	result = first_number / second_number;
	printf ("%f / %f = %f\n", first_number, second_number, result);

	return 0;
}

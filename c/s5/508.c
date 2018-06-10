#include <stdio.h>

void Temperatures (double Fah)
{
        const double a = 1.8;
        const double b = 32.0;
        const double c = 273.16;
        double Cel, Kel;
        Cel = (Fah - b) / a;
        Kel = Cel + c;
        printf("Fahrenheit: %.2lf Celsius: %.2lf Kelvin: %.2lf\n", Fah, Cel, Kel);
        printf("the next?(enter q or other letter to quit)\n");
}

int main(void)
{
        double Fah;
        printf("please enter a tempersture in Fahrenheit: ");
        while (scanf("%lf", &Fah))
                Temperatures(Fah);

        return 0;
}

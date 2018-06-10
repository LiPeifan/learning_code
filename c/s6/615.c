#include <stdio.h>

int main(void)
{
        double Daphne, Deirdre;
        int count = 1;
        Daphne = Deirdre = 100;
        while(Deirdre <= Daphne)
        {
                Daphne += 0.1 * 100;
                Deirdre *= 1.05;
                count++;
        }
        printf("Daphne = %lf, Deirdre = %lf.\n", Daphne, Deirdre);
        printf("this is the %d th years\n", count);

        return 0;
}

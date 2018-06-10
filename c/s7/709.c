#include <stdio.h>
#include <stdbool.h>

int main(void)
{
        int num, count;
        count = 4;
        int i;
        bool isPrime;
        printf ("please enter an int number:\n");
        scanf ("%d", &num);
        printf ("2   3   ");
        while (count <= num){
                for (i = 2; (i * i) <= count; i++){
                        if ((count % i) == 0){
                                isPrime = false;
                                break;
                        }
                        else
                                isPrime = true;
                }
                if (isPrime)
                        printf ("%d   ", count);
                count++;
        }
        printf ("\n");

        return 0;
}

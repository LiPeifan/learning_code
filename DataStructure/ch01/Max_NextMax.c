#include <stdio.h>

void MaxNextMax(int A[], int, int *, int *);

int main()
{
    int num[10] = {12, 23, 34, 99, 32, 22, 90, 21, 33, 78};
    int length = 10;
    int max, nmax;

    MaxNextMax(num, length, &max, &nmax);
}

void MaxNextMax(int A[], int n, int * max, int * nmax)
{
    if(A[0] >= A[1])
    {
        *max = A[0];
        *nmax = A[1];
    }
    else
    {
        *max = A[1];
        *max = A[0];
    }

    for(int i = 2; i < n; i++)
    {
        if(A[i] >= *max)
        {
            *nmax = *max;
            *max = A[i];
        }
        else if(A[i] > *nmax)
            *nmax = A[i];
    }
    printf("最大数为%d, 次大数为%d\n", *max, *nmax);
}
#include <stdio.h>

void SelectSort(int r[], int n);

int main()
{
    int r[9] = {2, 4, 6, 1, 9, 5, 3, 10, 7};
    int n = 9;

    SelectSort(r, n);

    for(int i = 0; i < n; i++)
    {
        printf("%d   ", r[i]);
    }
}

void SelectSort(int r[], int n)
{
    int index, temp;

    for(int i = 0; i < n-1; i++)
    {
        index = i;
        for(int j = i+1; j < n; j++)
        {
            if(r[j] < r[index])
                index = j;
        }
        if(index != i)
        {
            temp = r[i];
            r[i] = r[index];
            r[index] = temp;
        }
    }
}
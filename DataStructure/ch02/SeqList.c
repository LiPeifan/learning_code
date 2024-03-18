#include<stdio.h>
#include<stdlib.h>

#define Maxlength 100

typedef int datatype;

typedef struct
{
    datatype data[Maxlength];
    int length;
}Seqlist;

void InializeList(Seqlist *);
void CreateList(Seqlist *);
void InsertList(Seqlist *, int, datatype);
void DeleteList(Seqlist *, int, datatype *);
void DisplayList(Seqlist *);
void SearchList(Seqlist *, datatype);
void GetList(Seqlist *, int, datatype *);
void GetLength(Seqlist *, int *);
void ShowMenu(void);

int main()
{
    Seqlist L;
    datatype x;
    int n, i, loaction;
    char ch1, ch2, a;

}
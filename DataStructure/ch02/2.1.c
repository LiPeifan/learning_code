#include <stdio.h>
#include <stdlib.h>
#define Maxsize 100

typedef int datatype;

typedef struct seqnode   	  /*顺序表的类型定义*/
{
	datatype list[Maxsize];  /*定义一个存放顺序表的一维数组list*/
 	int len;                /*定义线性表的实际长度*/
}seqlist;

void create(seqlist *L)    /*建立一个顺序存储的线性表*/
{
	int i;
 	printf("Please input the len of the seqlist:");   /*从键盘输入当前顺序表的实际长度*/
 	scanf("%d",&L->len);
 	printf("Please input the every element of the seqlist:\n");
 	for(i=0;i<L->len;i++)            /*从键盘输入顺序表的每个元素*/
    	scanf("%d",&L->list[i]);
 	printf("Output the every element of the seqlist:\n");
 	for(i=0;i<L->len;i++)           /*顺序表建立成功后，输出整个顺序表*/
    	printf("%d   ",L->list[i]);      /*运行结果（1）*/
 	printf("\n");
}

void access(seqlist *L,int i)   /*根据指定位置访问线性表*/
{
	if((i<0)||(i>L->len-1))      /*判断给定位置是否为合法取值*/
   		printf("The place is not correct!\n");
 	else
   		printf("%d\n",L->list[i]);     /*运行结果（2）*/
}

void before_after(seqlist *L,int i)  /*根据指定位置寻找其前趋元素和后继元素*/
{
	if((i<0)||(i>L->len-1))
    	printf("The place is not correct!\n");
 	else if(i==0)
    	printf("无前驱，后继为：%d\n",L->list[i+1]);
 	else if(i==L->len-1)
    	printf("前驱为：%d，无后继\n",L->list[i-1]);
 	else if((i>0)&&(i<L->len-1))
    	printf("前驱为：%d,后继为：%d\n",L->list[i-1],L->list[i+1]);   /*运行结果（3）*/
}

void search(seqlist *L,int key)   /*根据给定元素key查找顺序表*/
{
	int m;
 	for(m=0;m<L->len;m++)
   	{
		if(L->list[m]!=key)
        	continue;
    	else
		{
			printf("Seaching is seccessful!\n");
	 		printf("The place of the search key is:%d\n",m);
	 		break;
		}
   	}
	if(m>=L->len)
		printf("The seqlist has no the key!\n");  /*运行结果（4）*/
}

void list_delete(seqlist *L,int i)  /*删除顺序表的元素*/
{
	int m;
 	printf("Output the every element of the seqlist before deleting:\n"); /*删除前输出顺序表中的所有元素*/
 	for(m=0;m<L->len;m++)
    	printf("%5d",L->list[m]);   /*运行结果（5）*/
 	printf("\n");
	for(m=i;m<L->len;m++)      /*删除位置之后的所有元素依次左移一位*/
   		L->list[m]=L->list[m+1];
 	L->len--;
 	printf("Output the every element of the seqlist after deleting:\n"); /*删除后输出顺序表中的所有元素*/
 	for(m=0;m<L->len;m++)
    	printf("%5d",L->list[m]);   /*运行结果（6）*/
 	printf("\n");
}

void insert(seqlist *L,int i,int e)  /*在顺序表指定位置i后插入元素e*/
{
	int m;
 	printf("Output the every element of the seqlist before inserting:\n");  /*插入前输出顺序表中的所有元素*/
 	for(m=0;m<L->len;m++)
    	printf("%5d",L->list[m]);     /*运行结果（7）*/
 	printf("\n");
 	L->len++;
 	for(m=L->len-1;m>=i;m--)  /*插入位置之后的元素依次右移一位*/
   		L->list[m+1]=L->list[m];
 	L->list[i]=e;      /*在指定位置i上插入元素e*/
 	printf("Output the every element of the seqlist after inserting:\n");  /*插入后输出顺序表中的所有元素*/
 	for(m=0;m<L->len;m++)
    	printf("%5d",L->list[m]);     /*运行结果（8）*/
 	printf("\n");
}

int main()
{
	seqlist *L = (seqlist *)malloc(sizeof(seqlist));
 	int i,e;
 	printf("\n--------------------function:create--------------------\n");
 	create(L);  /*调用函数create建立一个顺序表*/
	printf("\n--------------------function:access--------------------\n");
 	printf("Please input the position:");
 	scanf("%d",&i);  /*从键盘输入访问位置i*/
 	access(L,i-1);  /*调用函数access根据指定位置访问顺序表*/
	printf("\n--------------------function:before_after--------------------\n");
 	printf("Please input the position:");
 	scanf("%d",&i);  /*从键盘输入指定位置i*/
 	before_after(L,i-1); /*调用函数before_after根据位置i确定前趋元素和后继元素*/
 	printf("\n--------------------function:search--------------------\n");
 	printf("Please input the search key:");
 	scanf("%d",&e);   /*从键盘输入查找元素e*/
 	search(L,e);   /*调用函数search根据关键字e查找顺序表*/
	printf("\n--------------------function:delete--------------------\n");
 	printf("Please input the delete position:");
 	scanf("%d",&i);  /*从键盘输入删除位置i*/
 	list_delete(L,i-1);   /*调用函数delete删除指定位置i的元素*/
 	printf("\n--------------------function:insert--------------------\n");
 	printf("Please input the insert position:");
 	scanf("%d",&i);  /*从键盘输入插入位置i*/
 	printf("Please input the insert element:");
 	scanf("%d",&e);  /*从键盘输入插入元素e*/
 	insert(L,i-1,e);    /*调用函数insert在插入位置i上插入元素e*/

    return 0;
}

#include "stdio.h"
#include "stdlib.h"
#define Maxsize 100
typedef int elemtype;

typedef struct     /*队列类型的定义*/
{
    elemtype que[Maxsize];
    int front,rear;
    int len;
}sqqueue;

void init(sqqueue *q)       /*初始化建立一个空队列*/
{
    q->front=q->rear=-1;
    q->len=0;
    printf("There is a empty queue!\n");
}
void in(sqqueue *q,elemtype e)    /*自定义函数：元素入队列*/
{
    if(q->len==Maxsize)          /*判断队列是否已满*/
        printf("The queue is full!\n");
    else
   {
        q->rear=(q->rear+1)%Maxsize;   /*修改队尾指针*/
        q->que[q->rear]=e;      /*元素入队列*/
        q->len++;         /*队列长度加1*/
        if(q->len==1)
            q->front=q->rear=0;
   }
}

elemtype out(sqqueue *q)        /*自定义函数：元素出队列*/
{
    elemtype e;
    if(q->len==0)        /*判断队列是否为空*/
        printf("The queue is empty!\n");
    else
   {
        e=q->que[q->front];    /*元素出队列，出队列元素的值赋给变量e*/
        q->front=(q->front+1)%Maxsize;           /*修改队头指针*/
        q->len--;         /*队列长度减1*/
        if(q->len==0)
            q->front=q->rear=-1;
   }
    return e;
}

int main()
{
	sqqueue *q = (sqqueue *)malloc(sizeof(sqqueue));
 	elemtype ret,e;
 	int n,i;
 			
 	printf("\n--------------------Function:init--------------------\n");
 	init(q);     /*调用自定义函数init，建立一个空队列*/

 	printf("\n--------------------Function:in--------------------\n");
 	printf("Please input the number of the element:");
 	scanf("%d",&n);
 	printf("Please input the every element:");
 	for(i=0;i<n;i++)
    	{
		scanf("%d",&e);
     		in(q,e);	/*调用自定义函数push，所有元素依次入队列*/
	}     
 	printf("Output the every element in the queue:\n"); /*入队列结束后，输出队列内的所有元素，（1）*/
 	for(i=q->front;i<=q->rear;i++)
    		printf("%5d",q->que[i]);
 	printf("\n");

 	printf("\n--------------------Function:out--------------------\n");
 	ret=out(q);    /*调用自定义函数out，元素依次出队列*/
 	printf("The out element is:%d\n",ret);    /*输出当前出队列的元素值，（2）*/
    ret=out(q);    /*调用自定义函数out，元素依次出队列*/
 	printf("The out element is:%d\n",ret);    /*输出当前出队列的元素值，（2）*/
    in(q, 10);
 	printf("Output the every element in the queue:\n"); /*出队列结束后，输出队列内的所有元素，（3）*/
 	for(i=q->front;i<=q->rear;i++)
    		printf("%5d",q->que[i]);
 	printf("\n\n");

    return 0;
}

#include <stdio.h>
#define Maxsize 100

typedef int DataType;
typedef struct     /*栈类型的定义*/
{
	DataType stack[Maxsize];
 	int top;
}seqstack;

void init(seqstack *s)       /*初始化建立一个空栈*/
{
	s->top=-1;
 	printf("\n\nThere is a empty stack!\n");
}

void push(seqstack *s,DataType e)   /*自定义函数：元素入栈*/
{
	if(s->top==Maxsize-1)          /*判断栈是否已满*/
   		printf("The stack is full!\n");
 	else
   	{
		s->top++;          	/*修改栈顶指针*/
    	s->stack[s->top]=e;    /*元素入栈*/
   	}
}

DataType pop(seqstack *s)        /*自定义函数：元素出栈*/
{
	DataType e;
 	if(s->top== -1)        /*判断栈是否为空*/
   		printf("The stack is empty!\n");
 	else
   	{	e=s->stack[s->top];    /*元素出栈，出栈元素赋给变量e*/
    	s->top--;           /*修改栈顶指针*/
   	}
 	return e;
}

int main()
{
	seqstack x;
	seqstack *s = &x;
 	DataType e;
 	int ret,n,i,len;
 	printf("\n--------------------Function:init--------------------\n");
 	init(s);     /*调用自定义函数init，建立一个空栈*/
	printf("\n\n\n\n--------------------Function:push--------------------\n");
 	printf("\n\nPlease input the number of the pushed element:");
 	scanf("%d",&len);
 	printf("\n\nPlease input the every pushed element:");
 	for(i=0;i<len;i++)
    {
		scanf("%d",&e);
     	push(s,e);	/*调用自定义函数push，所有元素依次入栈*/
	}     
 	printf("\n\nOutput the every element in the stack:\n"); /*入栈结束后，输出栈内的所有元素，（1）*/
 	for(i=0;i<len;i++)
    	printf("%5d",s->stack[i]);
 	printf("\n");
 	printf("\n\n\n\n--------------------Function:pop--------------------\n");
 	ret=pop(s);    /*调用自定义函数pop，栈顶元素出栈*/
 	printf("\n\nThe poped element is:%d\n",ret);    /*输出当前出栈的栈顶元素值，（2）*/
 	len--;
 	printf("\n\nOutput the every element in the stack:\n"); /*出栈结束后，输出栈内的所有元素，（3）*/
 	for(i=0;i<len;i++)
    	printf("%5d",s->stack[i]);
 	printf("\n\n\n");

	return 0;
}

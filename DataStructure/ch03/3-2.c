#include "stdio.h"
#include "stdlib.h"
typedef int datatype;
typedef struct node   /*定义链栈的结点类型*/
{
	datatype data;
 	struct node *next;
}NODE,*NODEPTR;
#define LEN sizeof(NODE)

NODEPTR init(NODEPTR top)   /*自定义函数：建立一个空栈*/
{
	//top=(NODEPTR)malloc(LEN);     /*分配存储空间*/
 	top=NULL;
 	printf("There is an empty stack!\n");
 	return top;
}

NODEPTR push(NODEPTR top,datatype e)    /*自定义函数：元素入栈*/
{
	NODEPTR p;
 	p=(NODEPTR)malloc(LEN); /*为入栈结点分配存储空间，并将首地址赋值给指针变量p*/
 	if(p==NULL)                   /*p为空，空间分配失败*/
      		printf("Failure!\n");
 	else    /*存储空间分配成功，元素入栈*/
    {
		/********************blank********************/
		p->data=e;     	/*p指向需要入栈的结点*/
       	p->next=top;    	/*原栈顶成为新入栈结点的后继*/
      top=p;     	/*新入栈结点成为栈顶*/
    }
 	return top;
}

NODEPTR pop(NODEPTR top)      /*自定义函数：元素出栈*/
{
	datatype e;
 	NODEPTR p;
 	if(top==NULL)    /*判断栈是否为空*/
      		printf("The stack is empty!\n");
 	else     /*栈非空，元素出栈*/
    {
		/********************blank********************/
	e=top->data;   /*当前栈顶元素赋值给变量e*/
      p=top; /*当前栈顶赋值给指针变量p*/
     top=top->next; /*修改栈顶指针，获得新的栈顶*/
     free(p);  /*释放原栈顶*/
    }
 	printf("The poped element is:%d\n",e);
 	return top;
}

void output(NODEPTR top)
{
	NODEPTR s=top;
	printf("Output the every element in the stack.\n");
 	while(s!=NULL)         /*输出当前栈中的所有元素*/
    {
		printf("%5d,%5d\n",s->data,s->next);
       	s=s->next;
    }
}

int main()
{
	NODEPTR top;
 	NODEPTR s;
 	int i,n,ret;
 	datatype e;

 	printf("--------------------Function:init--------------------\n");
 	top=init(top);                 /*调用自定义函数，建立一个空栈*/
 	
	printf("\n--------------------Function:push--------------------\n");
 	printf("Please input the length of the stack:");
 	scanf("%d",&n);              
 	printf("Please input the every element of the stack:");
 	for(i=0;i<n;i++)
    {
		scanf("%d",&e);
       	top=push(top,e); /*空栈建立后，调用自定义函数，元素依次入栈*/
    }    
	output(top);

 	printf("\n--------------------Function:pop--------------------\n");
 	top=pop(top);         /*调用自定义函数，使栈顶元素出栈*/
 	output(top);

    return 0;
}

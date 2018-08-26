#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <malloc.h>

typedef struct Node
{
	int date;
	struct Node * pNext;
}NODE, * PNODE;

typedef struct stack
{
	PNODE pTop;						//指向栈的顶部 
	PNODE pBottom;					//指向栈的尾部的头节点 
}STACK, * PSTACK;

void init_stack(PSTACK);			//初始化一个栈
void push_stack(PSTACK, int); 		//压栈
bool pop_stack(PSTACK, int *);		//出栈 
void traverse_stack(PSTACK);		//遍历 
bool is_empty(PSTACK);				//判断是否为空 
void clear(PSTACK);					//清理栈 

int main(void)
{
	int val;						//储存出栈时的值
	STACK S;
	
	init_stack(&S);
	push_stack(&S, 1);
	push_stack(&S, 2);
	push_stack(&S, 3);
	push_stack(&S, 4);
	push_stack(&S, 5);
	push_stack(&S, 6);
	traverse_stack(&S);
	pop_stack(&S, &val);
	traverse_stack(&S);
	clear(&S);
	traverse_stack(&S);
	
	return 0;
}

void init_stack(PSTACK pS)
{
	pS->pBottom = (PNODE)malloc(sizeof(NODE));
	if (NULL == pS->pBottom)
	{
		printf("内存分配失败！\n");
		exit(-1);
	}
	else
	{
		pS->pTop = pS->pBottom;
		pS->pBottom->pNext = NULL;
	}
	return;
}

void push_stack(PSTACK pS, int val)
{
	PNODE pNew = (PNODE)malloc(sizeof(NODE));
	if (NULL == pNew)
	{
		printf("内存分配失败！\n");
		exit(-1);
	}
	else
	{
		pNew->date = val;
		pNew->pNext = pS->pTop;
		pS->pTop = pNew;
	}
	return;
}

bool is_empty(PSTACK pS)
{
	if(pS->pBottom == pS->pTop)
		return true;
	else
		return false;
}

bool pop_stack(PSTACK pS, int * val)
{
	if(is_empty(pS))
	{
		printf("出栈失败！\n");
		return false;
	}
	else
	{
		PNODE p = pS->pTop;
		*val = p->date;
		pS->pTop = pS->pTop->pNext;
		free(p);
		return true;
	}
}

void traverse_stack(PSTACK pS)
{
	PNODE p = pS->pTop;
	
	if(is_empty(pS))
	{
		printf("栈为空！\n");
		return;
	}
	else
	{
		while(p != pS->pBottom)
		{
			printf("%d	", p->date);
			p = p->pNext;
		}
		printf("\n");
		return;
	}
}

void clear(PSTACK pS)
{
	if(is_empty(pS))
	{
		return;
	}
	else
	{
		PNODE p, q;
		while(pS->pBottom != pS->pTop)
		{
			p = pS->pTop;
			pS->pTop = q = p->pNext;
			free(p);
		}
	}
}

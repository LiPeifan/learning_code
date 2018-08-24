#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node
{
	int data;
	struct Node * pNext;
}NODE, * PNODE;

PNODE creat_list(void);
void traverse_list(PNODE);
bool delete_list(PNODE, int, int *);
bool is_empty(PNODE);
bool insert_list(PNODE, int, int);

int main(void)
{
	PNODE pHead = NULL;
	int val;
	
	pHead = creat_list();
	traverse_list(pHead);
	delete_list(pHead, 3, &val);
	printf("删除节点后：\n");
	traverse_list(pHead);
	printf("删除的数字为：%d.\n", val);
	insert_list(pHead, 5, 89);
	printf("插入节点后：\n");
	traverse_list(pHead);
	
	return 0;
 } 
 
PNODE creat_list(void)
{
	int val, len; 
	
	printf("请输入需要生成的节点的个数：len = ");
	scanf ("%d", &len);
	
	PNODE pHead = (PNODE)malloc(sizeof(NODE));
	
	if(pHead == NULL)
	{
		printf("内存分配失败。\n");
		exit(-1);
	}
	
	PNODE pTail = pHead;
	pTail->pNext = NULL;	
	
	for (int i = 0; i < len; i++)
	{
		printf("请输入第%d个节点的值：", i+1);
		scanf("%d", &val); 
		
		PNODE pNew = (PNODE)malloc(sizeof(NODE));
		if(pNew == NULL)
		{
			printf("内存分配失败。\n");
			exit(-1);
		}
		
		pNew->data = val;
		pTail->pNext = pNew;
		pNew->pNext = NULL;
		pTail = pNew;
	}
	return pHead;
}

void traverse_list(PNODE pHead)
{
	PNODE p = pHead->pNext;
	
	while(p != NULL)
	{
		printf("%d		", p->data);
		p = p->pNext;
	}
	printf("\n");
	return;
}

bool is_empty(PNODE pHead)
{
	if(pHead->pNext == NULL)
		return true;
	else
		return false;
}

bool delete_list(PNODE pHead, int pos, int * val)
{
	int i = 0;
	PNODE p = pHead;
	PNODE pTail;
	while (NULL != p && i < pos-1)
	{
		p = p->pNext;
		i++;
	}
	
	if (i>pos-1 || NULL == p)
		return false;	
	pTail = p->pNext;
	p->pNext = p->pNext->pNext;
	*val = pTail->data;
	free(pTail);
	return true;
}

bool insert_list(PNODE pHead, int pos, int val)
{
	int i = 0;
	PNODE p = pHead;

	while (NULL != p && i < pos-1)
	{
		p = p->pNext;
		i++;
	}
	
	if (i>pos-1 || NULL == p)
		return false;	
		
	PNODE pNew = (PNODE)malloc(sizeof(NODE));
	if(pNew == NULL)
	{
		printf("内存分配失败。\n");
		exit(-1);
	}
	pNew->data = val;	
	pNew->pNext = p->pNext;
	p->pNext = pNew;			
}

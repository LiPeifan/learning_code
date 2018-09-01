#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>

typedef struct Queue
{
	int * pBase;
	int front;
	int rear;
}QUEUE;

void init_queue(QUEUE *);			//初始化
bool en_queue(QUEUE *, int);		//入队
bool is_full(QUEUE *);				
bool is_empty(QUEUE *);
bool out_queue(QUEUE *, int *);		//出队
void traverse_queue(QUEUE *);		//遍历

int main(void)
{
	QUEUE Q;
	int val;
	
	init_queue(&Q);
	en_queue(&Q,1);
	en_queue(&Q,2);
	en_queue(&Q,3);
	en_queue(&Q,4);
	en_queue(&Q,5);
	en_queue(&Q,6);
	en_queue(&Q,7);
	en_queue(&Q,8);
	en_queue(&Q,9);
	traverse_queue(&Q);
	out_queue(&Q, &val);
	printf("出队后为：\n");
	traverse_queue(&Q);
	printf("出队的元素为%d.\n", val);
	
	return 0;
}

void init_queue(QUEUE * pQ)
{
	pQ->pBase = (int * )malloc(sizeof(int) * 6);
	pQ->front = 0;
	pQ->rear = 0;
}

bool is_full(QUEUE * pQ)
{
	if ( (pQ->rear + 1) % 6 == pQ->front )
		return true;
	else
		return false;
}

bool is_empty(QUEUE * pQ)
{
	if (pQ->front == pQ->rear)
		return true;
	else
		return false;
}

void traverse_queue(QUEUE * pQ)
{
	int i = pQ->front;
	
	while (i != pQ->rear)
	{
		printf("%d	", pQ->pBase[i]);
		i = (i + 1) % 6;
	}
	printf("\n");
}

bool en_queue(QUEUE * pQ, int val)
{
	if ( is_full(pQ) )
	{
		return false;
	}
	else
	{
		pQ->pBase[pQ->rear] = val;
		pQ->rear = (pQ->rear + 1) % 6;
		return true;
	}
}

bool out_queue(QUEUE * pQ, int * val)
{
	if (is_empty(pQ))
	{
		return false;
	}
	else
	{
		*val = pQ->pBase[pQ->front];
		pQ->front = (pQ->front + 1) % 6;
		return true;
	}
}

#include <stdio.h>
#include <stdlib.h>

struct BTNode
{
	char ch;
	struct BTNode * pLchild;
	struct BTNode * pRchild;
};

struct BTNode * creat_Btree(void);			
void pretraverse(struct BTNode *);			//先序遍历 
void intraverse(struct BTNode *);			//中序遍历 
void posttraverse(struct BTNode *);			//后序遍历 

int main(void)
{
	struct BTNode * pBtree = creat_Btree();
	
	pretraverse(pBtree);
	printf("\n");
	intraverse(pBtree);
	printf("\n");
	posttraverse(pBtree);
	
	return 0;
}

struct BTNode * creat_Btree(void)
{
	struct BTNode * pA = (struct BTNode *)malloc(sizeof(struct BTNode));
	struct BTNode * pB = (struct BTNode *)malloc(sizeof(struct BTNode));
	struct BTNode * pC = (struct BTNode *)malloc(sizeof(struct BTNode));
	struct BTNode * pD = (struct BTNode *)malloc(sizeof(struct BTNode));
	struct BTNode * pE = (struct BTNode *)malloc(sizeof(struct BTNode));
	struct BTNode * pF = (struct BTNode *)malloc(sizeof(struct BTNode));
	struct BTNode * pG = (struct BTNode *)malloc(sizeof(struct BTNode));
	struct BTNode * pH = (struct BTNode *)malloc(sizeof(struct BTNode));
	struct BTNode * pI = (struct BTNode *)malloc(sizeof(struct BTNode));
	
	pA->ch = 'A';
	pB->ch = 'B';
	pC->ch = 'C';
	pD->ch = 'D';
	pE->ch = 'E';
	pF->ch = 'F';
	pG->ch = 'G';
	pH->ch = 'H';
	pI->ch = 'I';
	
	pA->pLchild = pB;
	pA->pRchild = pC;
	pB->pLchild = pD;
	pB->pRchild = NULL;
	pC->pLchild = pE;
	pC->pRchild = pF;
	pD->pLchild = pG;
	pD->pRchild = pH;
	pG->pLchild = pG->pRchild = NULL;
	pH->pLchild = pH->pRchild = NULL;
	pE->pLchild = pE->pRchild = NULL;
	pI->pLchild = pI->pRchild = NULL;
	pF->pLchild = pI;
	pF->pRchild = NULL;
	
	return pA;
}

void pretraverse(struct BTNode * pT)
{
	if (NULL != pT)
	{
		printf("%c", pT->ch);
		
		if (NULL != pT->pLchild)
		{
			pretraverse(pT->pLchild);
		}
		
		if (NULL != pT->pRchild)
		{
			pretraverse(pT->pRchild);
		}
	}
}

void intraverse(struct BTNode * pT)
{
	if (NULL != pT)
	{
		if (NULL != pT->pLchild)
		{
			intraverse(pT->pLchild);
		}
		
		printf("%c", pT->ch);
		
		if (NULL != pT->pRchild)
		{
			intraverse(pT->pRchild);
		}
	}
}

void posttraverse(struct BTNode * pT)
{
	if (NULL != pT)
	{
	
		
		if (NULL != pT->pLchild)
		{
			posttraverse(pT->pLchild);
		}
		
		if (NULL != pT->pRchild)
		{
			posttraverse(pT->pRchild);
		}
		
		printf("%c", pT->ch);
	}
}

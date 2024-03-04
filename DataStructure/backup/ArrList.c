#include <stdio.h>
#include <stdbool.h>
#include <malloc.h>
#include <stdlib.h>

typedef struct Arr
{
	int * pBase;			//存储的是数组的第一个元素的地址
	int len;				//数组所能容纳的最大元素的个数
	int cnt;				//当前数组有效元素的个数 
}ARR, * PARR;

void init_arr(PARR pArr, int length);				//初始化 
bool append_arr(PARR pArr, int val);				//追加 
bool insert_arr(PARR pArr, int pos, int val);		//插入(pos的值从1开始)
bool delete_arr(PARR pArr, int pos, int * pVal); 	//删除 
bool is_empty(PARR pArr);							//检查是否为空 
bool is_full(PARR pArr);							//检查是否为满 
void sort_arr(PARR pArr);							//排序 
void show_arr(PARR pArr);							//输出所有元素 
void inversion_arr(PARR pArr);						//倒置 
void merge_arr(PARR pArr1, PARR pArr2, PARR pArr3);	//合并 

int main(void)
{
	ARR arr, arr2, arr3;
	int val;
	
	init_arr(&arr, 6);
	init_arr(&arr2, 7);
	show_arr(&arr);
	append_arr(&arr, 12);
	append_arr(&arr, 2);
	append_arr(&arr, 90);
	append_arr(&arr, -3);
	append_arr(&arr, 32);
	printf("初始化后:\n");
	show_arr(&arr);
	insert_arr(&arr, 3, 39);
	printf("插入后:\n");	
	show_arr(&arr);
	delete_arr(&arr, 2, &val);
	printf("删除后:\n");
	show_arr(&arr);
	printf("删除的元素为%d\n", val);
	inversion_arr(&arr);
	printf("倒置后:\n");
	show_arr(&arr);
	sort_arr(&arr);
	printf("排序后:\n");
	show_arr(&arr);
	append_arr(&arr2, 88);
	append_arr(&arr2, 1);
	append_arr(&arr2, 55);
	append_arr(&arr2, -3);
	append_arr(&arr2, 35);
	printf("初始化后:\n");
	show_arr(&arr2);
	sort_arr(&arr2);
	printf("排序后:\n");
	show_arr(&arr2);
	merge_arr(&arr, &arr2, &arr3);
	printf("合并后:\n");
	show_arr(&arr3);

	return 0;
}

void init_arr(PARR pArr, int length)
{
	pArr->pBase = (int *)malloc(sizeof(int) * length);
	if (NULL == pArr->pBase)
	{
		printf("动态内存分配失败");
		exit (-1); 
	}
	else
	{
		pArr->len = length;
		pArr->cnt = 0;
	}
	
	return;
}

bool is_empty(PARR pArr)
{
	if (0 == pArr->cnt)
		return true;
	else
		return false;
}

bool is_full(PARR pArr)
{
	if (pArr->cnt == pArr->len)
		return true;
	else
		return false;
}

void show_arr(PARR pArr)
{
	if (is_empty(pArr))
	{
		printf("数组为空\n");
	}
	else
	{
		for (int i = 0; i < pArr->cnt; ++i)
			printf("%d	", pArr->pBase[i]);
	}
	printf("\n");
}

bool append_arr(PARR pArr, int val)
{
	if (is_full(pArr))
		return false;
	else
		pArr->pBase[(pArr->cnt)++] = val; 
	return true;
}

bool insert_arr(PARR pArr, int pos, int val)
{
	if (is_full(pArr))
		return false;
	
	if (pos < 1 || pos > pArr->cnt+1)
		return false;
	
	for (int i = pArr->cnt++; i >= pos; --i)
	{
		pArr->pBase[i] = pArr->pBase[i-1];
	}
	pArr->pBase[pos-1] = val;
}

bool delete_arr(PARR pArr, int pos, int * pVal)
{
	if (is_empty(pArr))
		return false;
	else if (pos < 1 || pArr->cnt < pos)
		return false;
	
	*pVal = pArr->pBase[pos-1];
	for (int i = pos; i < pArr->cnt; ++i)
	{
		pArr->pBase[i-1] = pArr->pBase[i];
	}
	pArr->cnt--;
}

void inversion_arr(PARR pArr)
{
	int i = 0;
	int j = pArr->cnt-1;
	int k;
	
	while (i < j)
	{
		k = pArr->pBase[i];
		pArr->pBase[i] = pArr->pBase[j];
		pArr->pBase[j] = k;
		++i;
		--j;
	}
}

void sort_arr(PARR pArr)
{
	int i, j, k;
	
	for (i = 0; i < pArr->cnt; ++i)
	{
		for (j = i+1; j < pArr->cnt; ++j)
		{	
			if (pArr->pBase[i] > pArr->pBase[j])
			{
				k = pArr->pBase[i];
				pArr->pBase[i] = pArr->pBase[j];
				pArr->pBase[j] = k;
			}
		}
	}
}

void merge_arr(PARR pArr1, PARR pArr2, PARR pArr3)
{
	int cnt = pArr1->cnt + pArr2->cnt;
	init_arr(pArr3, cnt);
	
	int * p1 = pArr1->pBase;
	int * p2 = pArr2->pBase;
	int * p3 = pArr3->pBase;
	
	pArr3->cnt = cnt;
	
	int * p1_last = pArr1->pBase + pArr1->cnt - 1;
	int * p2_last = pArr2->pBase + pArr2->cnt - 1;
	
	while(p1 <= p1_last && p2 <= p2_last)
	{
		if (*p1 > *p2)
			*p3++ = *p2++;
		else
			*p3++ = *p1++;
	}
	while (p1 <= p1_last)
		*p3++ = *p1++;
	while (p2 <= p2_last)
		*p3++ = *p2++;
//	show_arr(pArr3);
}

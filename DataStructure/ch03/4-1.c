#include "stdio.h"
#include "stdlib.h"
#define Maxsize 100

typedef struct s
{
	int id;					/*编号，主键，满足唯一性*/
	char name[10];			/*姓名*/
	char telephone[20];		/*电话号码*/
	char code[6];				/*邮政编码*/
	char address[100];		/*通信地址*/
	char email[20];			/*email地址*/
}Information;

typedef struct LinkNode
{
	Information data;			/*数据域，本身是个结构体类型*/
	struct LinkNode *next;		/*后继指针域*/
}Node, *NodePtr;

#define LEN sizeof(Node)

void menu()
{
	printf("--------------------Start Menu--------------------\n");
	printf("1 create\n");
	printf("2 insert\n");
	printf("3 search\n");
	printf("4 delete\n");
	printf("5 output\n");
	printf("0 exit\n");
	printf("\nPlease select the number 0-5.\n\n");
}

NodePtr create(NodePtr H)	/*建立一个单链表*/
{
	H=(NodePtr)malloc(LEN);   	/*为头结点H分配存储空间*/
 	H->next=NULL;             	/*从头结点开始建立单链表*/
 	return H;
}

void output(NodePtr H)	/*输出当前单链表中的所有元素*/
{
	NodePtr p=H->next;
	printf("\n\nOutput the information of the address book.\n");
	printf("\n\nid\tname\ttelepohone\tcode\taddress\temail\n\n");
	while(p!=NULL)
	{
		printf("%d\t%s\t%s\t%s\t%s\t%s\n",p->data.id,p->data.name,p->data.telephone,p->data.code,p->data.address,p->data.email);
		p=p->next;
	}
	printf("\n\n");
}

void search(NodePtr H, int id)	/*按给定的id在单链表中查找一个通讯信息*/
{
	NodePtr p;
	int flag=0;
	p=H->next;   /*指针变量p赋值为头结点的后继，从该位置开始查找整个单链表*/
 	while(p)      /*当p不为空时，执行循环*/
   	{
		if(p->data.id==id)   /*指针变量p当前指向结点的数据域不等于查找元素e*/
		{
			printf("\n\nSearching is successful!\n");
			printf("\n\nOutput the information: id,name,telephone,code,address,email\n");
			printf("\n\n%d\t%s\t%s\t%s\t%s\t%s\n",p->data.id,p->data.name,p->data.telephone,p->data.code,p->data.address,p->data.email);
			flag=1;
			break;
		}
		p=p->next;
   	}
	if(flag==0)
   		printf("\nThe address book has no the information!\n");
}

NodePtr insert(NodePtr H, Information info)	/*向单链表中插入一个完整的通讯信息*/
{
	NodePtr s;
	s=(NodePtr)malloc(LEN);		/*为插入结点分配存储空间*/
	s->data=info;			/*指针变量s指向当前的插入结点*/
	s->next=H->next;
	H->next=s;
	return H;
}

NodePtr del(NodePtr H, int id)			/*按给定的id从单链表中删除一个通讯信息*/
{
	NodePtr p=H,s=H->next,r;
	while(s)      /*当s不为空时，执行循环*/
   	{
		if(s->data.id==id)   /*指针变量p当前指向结点的数据域不等于查找元素e*/
      	{
			r=s;		p->next=s->next;		free(r);		break;
      	}
		p=s;
		s=s->next;
   	}
 	return H;
}

int main()
{
	NodePtr H = (NodePtr)malloc(sizeof(Node));
	int id,s;
	Information info;
	menu();
	printf("Please input the select number: ");
	scanf("%d",&s);
	while(s!=0)
	{
		switch(s)
		{
			case 1:
				system("clear");		menu();		H=create(H);		break;
			case 2:
				system("clear");		menu();
				printf("\n\nPlease input id name telephone code address email\n\n");
				scanf("%d %s %s %s %s %s",&info.id,info.name,info.telephone,info.code,info.address,info.email);
				H=insert(H,info);
				break;
			case 3:
				system("clear");		menu();
				printf("\n\nPlease input the search id: ");
				scanf("%d",&id);
				search(H,id);
				break;
			case 4:
				system("clear");		menu();
				printf("\n\nPlease input the delete id: ");
				scanf("%d",&id);
				H=del(H,id);
				break;
			case 5:
				system("clear");
				menu();
				output(H);
				break;
			case 0: exit(0);
		}
		printf("\n\n\nPlease input the select number: ");
		scanf("%d",&s);
	}

    return 0;
}

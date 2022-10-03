#include<stdio.h>
#include<stdlib.h>

typedef struct node_{
	int value;
	struct node_ *pre;
	struct node_ *next;
}Node;

typedef struct list_{
	struct node_ *head;
	struct node_ *tail;
}List;

void Node_clear(List *list)
{
	Node *p=NULL,*q=NULL;
	for(p=list->head;p;p=q)
	{
		q=p->next;
		free(p);
	}
}

void Node_add(List *list)
{
	int t=0;
	printf("Please input number.\n");
	scanf("%d",&t);
	Node *p=(Node*)malloc(sizeof(Node));
	if(list->head&&list->tail)
	{
		list->head->pre=p;
		p->next=list->head;
		p->pre=NULL;
		p->value=t;
		list->head=p;
	}
	else
	{
		list->head=p;
		list->tail=p;
		p->value=t;
		p->pre=NULL;
		p->next=NULL;
	}
}

void Node_search(List *list)
{
	printf("Please input the number to search.\n");
	int f=0,n=1;
	_Bool flag=0;
	scanf("%d",&f);
	Node *p=list->tail;
	for(;p;p=p->pre)
	{
		if(p->value==f)
		{
			printf("Found:\n%d : %d\n",n,f);
			flag=1;
		}
	}
	if(!flag)	printf("Not found!\n");
}

void Node_delete(List *list)
{
	printf("Please input the number to delete.\n");
	int f=0;
	_Bool flag=0;
	scanf("%d",&f);
	if(list->head->value==f)
	{
		list->head=list->head->next;
		free(list->head->pre);
		list->head->pre=NULL;
	}
	else if(list->tail->value==f)
	{
		list->tail=list->tail->pre;
		free(list->tail->next);
		list->tail->next=NULL;
	}
	else
	{
		Node *p=list->head;
		for(p;p;p=p->next)
		{
			if(p->value==f)
			{
				p->pre->next=p->next;
				p->next->pre=p->pre;
				free(p);
			}
		}
	}
}

void Node_output(List *list)
{
	Node *p=list->tail;
	int n=1;
	for(;p;p=p->pre,n++)
	{
		printf("%d : %d\n",n,p->value);
	}
}

int main()
{
	List list={NULL,NULL};
	int t=0,n=0;
	_Bool flag=1;
	while(flag)
	{
		printf("Print 0 to exit;\n"
			"Print 1 to add;\n"
			"Print 2 to search;\n"
			"Print 3 to delete;\n"
			"Print 4 to output.\n");
		scanf("%d",&t);
		switch(t)
		{
			case 0:Node_clear(&list);flag=0;break;
			case 1:Node_add(&list);break;
			case 2:Node_search(&list);break;
			case 3:Node_delete(&list);break;
			case 4:Node_output(&list);break;
			default:printf("Wrong order!\n");break;
		}
	}	
	return 0;
}

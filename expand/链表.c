#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int value;
	struct node *next;
}NODE;

NODE *input(void);
NODE *addtolist(NODE*,int);
NODE *searchlist(NODE*,int);
NODE *deletefromlist(NODE*,int);

int main()
{
	NODE *head=0,*se=0,*de=0;
	int t=0;
	printf("Please input some numbers to form the node\nUse 0 when you want to stop input\n");
	head=input();
	printf("Please input the number you want to search inside the node\n");
	scanf("%d",&t);
	se=searchlist(head,t);
	if(se)  printf("succeed to find the number\n");
	else if(!se)  printf("fail to find the number\n");
	printf("Please input the number you want to delete from the node\n");
	scanf("%d",&t);
	de=deletefromlist(head,t);
	if(de!=0)  
	{
		printf("succeed to delete the number\n");
		head=de;
	}
	else  printf("fail to delete the number\n");	
	return 0;
 } 
 
NODE *input(void)
{
	NODE *head=0;
	int t=0;
	while(1)
	{	
		scanf("%d",&t);
		if(t==0) return head;
		head=addtolist(head,t);
	}
}

NODE *addtolist(NODE *p,int t)
{
	NODE *tnode=0;
	tnode=(NODE*)malloc(sizeof(NODE));
	tnode->value=t;
	tnode->next=p;
	return tnode;
}

NODE *searchlist(NODE *head,int n)
{
	while(1)
	{
		if(n==head->value)  return head;
		else if(head->next==0)  return 0;
		head=head->next;
	}
}

NODE *deletefromlist(NODE *head,int n)
{
	NODE *t=0;
	if(head->value==n)
	{
		head=head->next;
		return head;
	}
	t=head;
	while(1)
	{
		if(t->next->value==n)
		{
			free(t->next);
			t->next=t->next->next;
			return head;
		}
		else if(t->next->next==0)  return 0;
		t=t->next;
	}
}

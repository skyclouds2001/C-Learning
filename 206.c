#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	char value;
	struct node *next;
}NODE;

NODE *input(void);
NODE *addtolist(NODE*,char);
NODE *deletefromlist(NODE*,char);
void output(NODE*);

int main()
{
	NODE *head=0,*de=0;
	char t=0;
	head=input();
	scanf("%c",&t);
	deletefromlist(head,t);
	output(head);
	return 0;
 } 
 
NODE *input(void)
{
	NODE *head=0;
	char t=0;
	while(1)
	{	
		scanf("%c",&t);
		if(t=='\n') return head;
		head=addtolist(head,t);
	}
}

NODE *addtolist(NODE *p,char t)
{
	NODE *tnode=0;
	tnode=(NODE*)malloc(sizeof(NODE));
	tnode->value=t;
	tnode->next=p;
	return tnode;
}

NODE *deletefromlist(NODE *head,char n)
{
	NODE *t;
	if(head->value==n)
	{
		free(head);
		head=head->next;
	}
	t=head;
	while(1)
	{
		if(t->next->value==n)
		{
			free(t->next);
			t->next=t->next->next;
		}
		if(t->next->next==0)  break;
		t=t->next;
	}
	return head;
}

void output(NODE*head)
{
	while(1)
	{
		printf("%c",head->value);
		head=head->next;
		if(head==0)  break;
	}
}

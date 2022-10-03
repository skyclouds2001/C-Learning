#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 5

typedef struct array_{
	int *array;
	int size;
	struct array_ *next;
}ARRAY;

ARRAY array_creat(ARRAY a)
{
	a.array=(int*)malloc(SIZE*sizeof(int));
	memset(a.array,-1,SIZE*sizeof(int));
	a.size=SIZE;
	a.next=NULL;
	return a;
}

void array_free(ARRAY a)
{
	free(a.array);
	if(a.next)	array_free(*(a.next));
	a.next=NULL;
	a.array=NULL;
	a.size=0;
}

void array_output(ARRAY a,int n)
{
	if(a.next)	array_output(*(a.next),n-SIZE);
	int*p=a.array,i;
	if(n>SIZE)	i=SIZE-1;
	else	i=n-1;
	while(i>=0)
	{
		printf("%d\n",p[i]);
		i--;
	}
}

int array_size(ARRAY a)
{
	return a.size;
}

ARRAY array_inflate(ARRAY a)
{
	if(a.next)	array_inflate(*(a.next));
	else
	{
		a.next=(ARRAY*)malloc(sizeof(ARRAY));
		a.next->array=(int*)malloc(SIZE*sizeof(int));
		memset(a.next->array,-1,SIZE*sizeof(int));
		a.size+=SIZE;
		a.next->size=SIZE;
		a.next->next=NULL;
	}
	return a;
}

int*array_at(ARRAY a,int n)
{
	if(a.next)	return array_at(*(a.next),n-SIZE);
	else	return a.array+n-1;
}

int main()
{
	ARRAY a={NULL,0,NULL};
	int t=0,n=0;
	a=array_creat(a);
	while(t!=-1)
	{
		scanf("%d",&t);
		if(t==-1)	break;
		n++;
		if(n>array_size(a))	a=array_inflate(a);
		*(array_at(a,n))=t;
	}
	array_output(a,n);
	array_free(a);
	return 0;
 } 

#include<stdio.h>
int main()
{
	int a[10]={0};
	int i,*p=0,t;
	for(i=0;i<10;i++)   
	{
		a[i]=i;
		printf("%d ",a[i]);
	}
	printf("\n");
	p=a;
	for(i=0;i<10;i++)   
	{
		*p+=1;
		t=*p;
		printf("%d ",t);
		p+=1;
	}
	return 0;	
}

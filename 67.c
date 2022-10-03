#include<stdio.h>
int main()
{
	short n=0,k=0,flag=0;
	scanf("%hd%hd",&n,&k);
	short a[n];
	short i;
	for(i=0;i<n;i++)  scanf("%hd",a+i);
	for(i=0;i<n;i++)
	{
		if(*(a+i)==k)  
		{
			printf("%hd ",i);
			flag=1;
		}
	}
	if(flag==0)  printf("%d",-1);
	return 0;
 } 

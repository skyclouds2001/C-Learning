#include<stdio.h>
int main()
{
	short a[10]={1,2,3,4,5,6,7,8,9,10},b[10]={0};
	short p=0,i=0;
	scanf("%hd",&p);
	for(i=p;i>=0;i--)
	{
		b[9+i-p]=a[i];
	}
	for(i=p+1;i<10;i++)
	{
		b[i-p-1]=a[i];
	}
	for(i=0;i<10;i++)
	{
		printf("%hd ",b[i]);
	}
	return 0;
 } 

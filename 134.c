#include<stdio.h>
int main()
{
	int n=0;
	scanf("%d",&n);
	short a[9]={0};
	short i=0,j=0,t=0;
	while(n!=0)
	{
		a[i]=n%10;
		n/=10;
		i++;
	}
	n=i;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
				t=a[j];  a[j]=a[j+1];  a[j+1]=t;
			}
		}
	}
	for(i=0;i<n;i++)  printf("%hd ",a[i]);
	return 0;
 } 

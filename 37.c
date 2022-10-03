#include<stdio.h>
int main()
{
	short n;
	scanf("%hd",&n);
	short a[n];
	short i,j,t;
	for(i=0;i<n;i++)
	{
		scanf("%hd",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=n-2;j>=i;j--)
		{
			if((a[j]%2==1&&a[j+1]%2==0)||(a[j]%2==a[j+1]%2&&a[j]<a[j+1]))
			{
				t=a[j];  a[j]=a[j+1];  a[j+1]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%hd ",a[i]);
	}
	return 0;
}

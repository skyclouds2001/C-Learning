#include<stdio.h>
#include<math.h>
int main()
{
	short n=0;
	scanf("%hd",&n);
	short a[n],flag=0;
	short i,j,t,d;
	for(i=0;i<n;i++)
	{
		scanf("%hd",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	flag=1;
	for(i=0;i<n-2&&flag;i++)
	{
		if(a[i]-a[i+1]!=a[i+1]-a[i+2])  flag=0;
	}
	if(flag)
	    printf("%hd",a[1]-a[0]);
	else
	    printf("no");
	return 0;
}

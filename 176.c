#include<stdio.h>
int main()
{
	short n=0,count1=0,count2=0;
	scanf("%hd",&n);
	short a[n];
	short i=0,j=0,t=0,k=0;
	for(i=0;i<n;i++) scanf("%hd",a+i);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j]; a[j]=a[j+1]; a[j+1]=t;
			}
		}
	}
	if(n==1)  printf("%hd",a[0]);
	else if(n%2==1)
	{
		t=a[n/2];
		for(i=n/2-1,count1=0;i>=0;i--)
		{
			if(a[i]==t)  count1++;
			else  break;
		}
		for(i=n/2+1,count2=0;i<n;i++)
		{
			if(a[i]==t)  count2++;
			else  break;
		}
		if(count1==count2)  printf("%hd",t);
		else  printf("%hd",-1);
	}
	else if(n%2==0&&a[n/2]!=a[n/2-1])
	{
		printf("%hd",-1);
	}
	else if(n%2==0&&a[n/2]==a[n/2-1])
	{
		t=a[n/2];
		for(i=n/2-2,count1=0;i>=0;i--)
		{
			if(a[i]==t)  count1++;
			else  break;
		}
		for(i=n/2+1,count2=0;i<n;i++)
		{
			if(a[i]==t)  count2++;
			else  break;
		}
		if(count1==count2)  printf("%hd",t);
		else  printf("%hd",-1);
	}
	return 0;
}

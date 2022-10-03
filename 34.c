#include<stdio.h>
int function(int a, int b)
{
	int left=0,right=0;
	int count=0,i=0,j=0,sum=0,t=0,n=0,sumt=0;
	if(a<100&&b<100)    
	{
		return 0;
	}
	else if(a>=100&&b>=100&&a<b)
	{
		left=a; right=b;
	}
	else if(a>=100&&b>=100&&a>b)
	{
		left=b; right=a;
	}
	else if(a<100&&b>=100)
	{
		left=100; right=b;
	}
	else if(a>=100&&b<100)
	{
		left=100; right=a;
	}
	for(i=left;i<=right;i++)
	{
		t=i;
		n=0;
		while(t!=0)
		{			
		    n++;
		    t/=10;
		}
		t=i;
		while(t!=0)
		{			
		    sumt=1;
			for(j=0;j<n;j++)
		    {
		    	sumt*=t%10;
			}
			sum+=sumt;
		    t/=10;
		}
		if(sum==i)  count++;		    
		sum=0;		
	}
	return count;
}
int main()
{
	int a=0,b=0,n=0;
	scanf("%d%d",&a,&b);
	n=function(a,b);
	printf("%d",n);
	return 0;
}

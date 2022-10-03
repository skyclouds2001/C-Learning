#include<stdio.h>
#include<math.h>
int y[200]={0};

int fun(int x)
{
	int i,j,t,flag;
	if(x<=1) return 0;
	if(x==2) 
	{
		y[0]=2;
		return 1;
	}
	y[0]=2;
	t=1;	
	for(i=3;i<=x;i+=2,flag=1)
	{
		for(j=3;j<=sqrt(i);j+=2)
		{
			if(i%j==0) 
			{
				flag=0;
				break;
			}			
		}
		if(flag==1)
		{
			y[t]=i;
			t++;
		}		
	}
	return t;
} 

int main()
{	
	int x,n;
	int k;
	scanf("%d",&x);
	n=fun(x);
	printf("%d \n",n);
	for(k=0;k<n;k++)
	{
		printf("%d ",y[k]);
	}
	return 0;
}

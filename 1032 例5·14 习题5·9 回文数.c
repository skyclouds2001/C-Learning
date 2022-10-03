#include<stdio.h>
int main()
{
	short a[10]={0};
	short N=0,i=0,flag=1;
	int t=0,n=0;
	scanf("%d",&n);
	t=n;
	while(t!=0)
	{
		a[i]=t%10;
		t/=10;
		i++;
	}
	N=i;
	for(i=0;i<N/2;i++)
	{
		if(a[i]!=a[N-i-1])
		flag=0;
		break;
	}
	if(flag==1)
	{
		for(i=0;i<N;i++)
		{
			t+=a[i];
		}
		printf("%d",t);
	}
	else
	{
		printf("no");
	}
	return 0;
 } 

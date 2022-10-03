#include<stdio.h>
int main()
{
	int a=0,b=0;
	scanf("%d%d",&a,&b);
	int GCD=0,LCM=0;
	int t=0;
	if(a<b)
	{
		t=b;  b=a;  a=t;	
	}
	if(a%b==0)
	{
		GCD=b;  LCM=a;		
	}
	else
	{
		int c=0,d=0;
		c=a;  d=b;
		while(c%d!=0)
		{
			t=c%d;
			if(t<c&&t<d)
			{
				c=d;  d=t;
			}
			else if(t>d&t<c)
			{
				c=t;
			}
		}
		GCD=d;
		LCM=a*b/d;
	}
	printf("%d %d",GCD,LCM);
	return 0;
 } 

#include<stdio.h>
int main()
{
	int N=0,K=0,n=0;
	int sum=0,c=0;
	scanf("%d",&K);
	for(N=1,c=1;N<=K;N++)
	{
		sum+=c;
		n++;
		if(n==c)
		{
			c++;
			n=0;
		}
	 }
	 printf("%d",sum);
	 return 0; 
 } 

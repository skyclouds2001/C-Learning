#include<stdio.h>
int main()
{
	int n,sum=0,i,x;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		sum+=x;
	}
	printf("%d",sum);
	return 0;
}

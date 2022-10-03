#include<stdio.h>
int main()
{
	int a=0,n=0;
	scanf("%d %d",&a,&n);
	int b[n],sum=0;
	short i=0;
	b[0]=a;
	sum+=b[0];
	for(i=1;i<n;i++)
	{
		b[i]=b[i-1]*10+a;
		sum+=b[i];
	}
	printf("%d",sum);
	return 0;
 } 

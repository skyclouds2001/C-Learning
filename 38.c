#include<stdio.h>
int main()
{
	int n;
	int sum=0;
	short a[10]={0},N,flag;
	short i,t,j;
	i=0;    j=0;
	scanf("%d",&n);
	while(n!=0)
	{
		t=n%10;
		a[j]=t;
		n/=10;
		j++;
		sum+=t;
	}
	N=j;
	flag=1;
	for(i=0;i<N/2&&flag;i++)
	{
		if(a[i]!=a[N-i-1])  flag=0;
	}
	if(flag)  printf("%d",sum);
	else  printf("no");
	return 0;
}

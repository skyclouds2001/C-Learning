#include<stdio.h>

double Mul(int x)
{
	int i=1,t=1;
	if(x==0&&x==1)
	    return 1;
	for(;i<=x;i++)
	{
		t*=i;
	}
	return t;
}

int main()
{
	int m,n;
	double result;
	scanf("%d%d",&m,&n);
	result=Mul(m)/Mul(n)/Mul(m-n);
	printf("%.2f",result);
	return 0;
}

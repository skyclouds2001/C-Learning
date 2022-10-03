#include<stdio.h>
double cf(double x,int n)
{
	int i;
	double result=1;
	for(i=0;i<n;i++)
	{
		result*=x;
	}
	return result;
 } 
int main()
{
	double x,t;
	int n;	
	scanf("%lf%d",&x,&n);
	t=cf(x,n);
	printf("%lf",t);
	return 0;
}

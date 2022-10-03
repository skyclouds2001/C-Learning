#include<stdio.h>
int Fibonacci(short n)
{
	int t;
	if(n==1||n==2)
	{
		return 1;
	}
	else if(n>=3)
	{
		t=Fibonacci(n-1)+Fibonacci(n-2);
	}
	return t;
}
int main()
{
	short n;
	int x;
	scanf("%hd",&n);
	x=Fibonacci(n);
	printf("%d",x);
	return 0;
 } 

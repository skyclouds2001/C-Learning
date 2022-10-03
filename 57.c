/*
问题描述	
有一种形式的Fibonacci数列定义如下：
F(0)=7 
F(1)=11
F(n)=F(n-1)+F(n-2)（n>=2）
按以下声明写一个函数fib
int fib(int n);
fib函数用来计算参数n对应的F(n)。
fib(n)的返回值是F(n)
输入说明	
函数参数为一个整数n（0<=n<40）。
输出说明	
函数返回值为整数，表示n对应的F(n)值。
输入样例	
2
输出样例	
18
*/
#include<stdio.h>
int fib(int n);
int main()
{
	int n=0,s=0;
	scanf("%d",&n);
	s=fib(n);
	printf("%d",s);
	return 0;
}
int fib(int n)
{
	int result=0;
	if(n==0)
	{
		result=7;
	}
	else if(n==1)
	{
		result=11;
	}
	else if(n>=2)
	{
		result=fib(n-1)+fib(n-2);
	}
	return result;
}

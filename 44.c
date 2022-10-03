/*
问题描述	
已知一个斐波纳契数列中的数字依次为1, 1, 2, 3, 5, 8, 13, 21, 34, 55 … 。请判断该数列中第n个数字（n从1开始计数）是不是素数。
输入说明	
输入一个整数n（1<n<=40）。
输出说明	
判断斐波纳契数列中的第n个数字是不是素数，如果是输出yes，否则输出该数字。
输入样例
样例1输入	
6
样例2输入
4
输出样例	
样例1输出
8
样例2输出
yes
*/
#include<stdio.h>
#include<math.h>
short isprime(int x)    //0=no;1=yes;
{
	short flag;
	int i;
	if(x==1||(x!=2&&x%2==0))
	{
		return 0;
	}
	else if(x==2)
	{
		return 1;
	}
	else
	{
		flag=1;
		for(i=3;i<=sqrt(x);i+=2)
		{
			if(x%i==0)
			{
				flag=0;
				break;
			}
		}
	}
	return flag;
} 
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
	if(isprime(x))
	{
		printf("yes");
	}
	else
	{
		printf("%d",x);
	}
	return 0;
 } 

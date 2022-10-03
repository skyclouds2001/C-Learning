/*
问题描述	
编写一个程序，从键盘输入一个非零整数n（0 < n <= 1000000000），对整数n进行如下处理：
将整数的各位数字取出来相加，如果结果是一位数则输出该数，否则重复上述过程，直到得到的结果为一位数，并输出该结果。
例如：n=456，变换过程如下
4+5+6=15
1+5=6
输出结果为6
输入说明	
一个非零整数n。
输出说明	
输出整数n的处理结果。
输入样例	
456
输出样例	
6
*/
#include<stdio.h>
int add(int n);
int main()
{
	int n=0,x=0,y=0;
	scanf("%d",&n);
	x=n;
	while(x>10)
	{
		y=add(x);
		x=y;
	}
	printf("%d",x);
	return 0;
 } 
int add(int n)
{
 	int sum=0,x=0;
 	x=n;
 	short t=0;
 	do
 	{
 		t=x%10;
 		sum+=t;
 		x/=10;
	 }while(x!=0);
	 return sum;
 }

/*
��������	
��һ����ʽ��Fibonacci���ж������£�
F(0)=7 
F(1)=11
F(n)=F(n-1)+F(n-2)��n>=2��
����������дһ������fib
int fib(int n);
fib���������������n��Ӧ��F(n)��
fib(n)�ķ���ֵ��F(n)
����˵��	
��������Ϊһ������n��0<=n<40����
���˵��	
��������ֵΪ��������ʾn��Ӧ��F(n)ֵ��
��������	
2
�������	
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

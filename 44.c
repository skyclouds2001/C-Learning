/*
��������	
��֪һ��쳲����������е���������Ϊ1, 1, 2, 3, 5, 8, 13, 21, 34, 55 �� �����жϸ������е�n�����֣�n��1��ʼ�������ǲ���������
����˵��	
����һ������n��1<n<=40����
���˵��	
�ж�쳲����������еĵ�n�������ǲ�����������������yes��������������֡�
��������
����1����	
6
����2����
4
�������	
����1���
8
����2���
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

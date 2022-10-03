/*
分解质因数
题目描述：
每个非素数（合数）都可以写成几个素数（也可称为质数）相乘的形式，
这几个素数就都叫做这个合数的质因数。编写程序将一个正整数分解质因数
输入描述：
输入一个正整数n（2<n<1000）
输出描述：
形如a*b*b*c，质因数按照从小到大的顺序排列
输入样例：
90
输出样例：
2*3*3*5
*/

#include<stdio.h>
#include<math.h>

short isprime(short x)
{
	short flag;
	short i;
	if(x<=1)
	    flag=0;
	else if(x==2)
	    flag=1;
	else if(x%2==0)
	    flag=0;
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
 
int main()
{
	short n=0,t=0;
	short i=0,j=0;
	short p[10]={0};
	scanf("%hd",&n);
	if(n==3)
	{
		printf("3");
		return 0;
	}
	t=n;
	for(i=2;i<=n;)
	{						
		if(isprime(i))
		{
			if(t%i==0)
			{
				t/=i;
				p[j]=i;
				j++;
			}						
			if(t==1)
			{
				break;
			}
		}
		if(t%i!=0)
		{
			i++;
		}
	}
	printf("%hd",p[0]);
	for(i=1;i<j;i++)
	{
		printf("*");
		printf("%hd",p[i]);
	}
	return 0;
}



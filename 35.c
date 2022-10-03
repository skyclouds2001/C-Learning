/*
标题	
歌德巴赫猜想
类别	
函数与递归
时间限制	
2S
内存限制	
10000Kb
问题描述
歌德巴赫猜想：
任意一个大偶数都能分解为两个素数的和,
对与输入的一个正偶数，写一个程序来验证歌德巴赫猜想。
由于每个正偶数可能分解成多组素数和，仅输出分解值分别是最小和最大素数的一组，按从小到大顺序输出。
输入说明	
输入一个正偶数n，1<n<1000。
输出说明	
输出分解出的两个最小和最大素数。
输入样例	
10
输出样例	
3 7
*/ 

#include<stdio.h>
#include<math.h>

short isprime(int x)
{
	int i;
	short flag;
	flag=1;
	if(x==2) 	
		return 1;
	else if(x%2==0)
	    return 0;		
	for(i=3;i<=sqrt(x);i+=2)
	{
		if(x%i==0) 
		{
			flag=0;
			break;
		}			
	}
	if(flag==1)			
	    return 1;
	else 
	    return 0;
} 

int main()
{
	int n;
	int i;
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(isprime(i)==1&&isprime(n-i)==1)					
			break;		   
	}
	printf("%d %d",i,n-i);
	return 0;	
}

/*
标题:	
最大公约数
类别:	
时间限制:	
1 S
内存限制:	
1000 Kb
问题描述:	
最大公约数（GCD）指某几个整数共有因子中最大的一个，最大公约数具有如下性质，
gcd(a,0)=a
gcd(a,1)=1
因此当两个数中有一个为0时，gcd是不为0的那个整数，
当两个整数互质时最大公约数为1。
输入两个整数a和b，求最大公约数
输入说明：
输入为两个非负整数a和b（0<=a,b<10000），a和b之间用空格分隔，
输出说明：
输出其最大公约数
输入样例：
样例1输入	
2 4
样例2输入：
12 6
样例3输入：
3 5
输出样例：
样例1输出	
2
样例2输出
6
样例3输出
1
*/

#include<stdio.h> 

int maxf(int a,int b)
{
	if(a>b) 
	    return a;
	else
	    return b;
}

int minf(int a,int b)
{
	if(a<b) 
	    return a;
	else
	    return b;
}

int main()
{
	int a,b;
	int t;
	int max,min;
	scanf("%d%d",&a,&b);
	if(a==0||b==0)
	{
		printf("%d",maxf(a,b));
		return 0;
	}
	max=maxf(a,b);  min=minf(a,b);   
	while(1)
	{
		t=max-min;
		if(t==1||t==min)  break;
		else if(t<min)
		{
		    max=min;
		    min=t;
		}    
		else if(t>min)		
			max=t;							
	}
	printf("%d",t);
	return 0; 
}

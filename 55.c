/*
问题描述	
有一分数序列：
2/1,3/2,5/3,8/5,13/8,21/13,......An/Bn
A1=2，A2=3，An=An-1+An-2；
B1=1，B2=2，Bn=Bn-1+Bn-2。
求出这个数列的前n(2<=n<=30)项之和
输入说明	
一个整数n
输出说明	
输出一个实数表示数列前n项之和，结果保留2位小数（四舍五入）
输入样例	
2
输出样例	
3.50
*/

#include<stdio.h>
int main()
{
	short i=0;
	short n=0;
	int a[30]={0},b[30]={0};
	double sum=0;
	double c[30]={0};
	scanf("%hd",&n);
	a[0]=2;    a[1]=3;
	b[0]=1;    b[1]=2;
	c[0]=(double)a[0]/(double)b[0];    c[1]=(double)a[1]/(double)b[1];
	sum+=c[0];    sum+=c[1];
	for(i=2;i<n;i++)
	{
		a[i]=a[i-1]+a[i-2];
		b[i]=b[i-1]+b[i-2];
		c[i]=(double)a[i]/(double)b[i];
		sum+=c[i];
	}
	printf("%.2f",sum);
	return 0;
}

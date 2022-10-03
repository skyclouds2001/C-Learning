/*
标题	
整数分析
类别
流程控制
时间限制	
1S
内存限制	
256Kb
问题描述	
给出一个整数n（0<=n<=100000000）。求出该整数的位数，以及组成该整数的所有数字中的最大数字和最小数字。
输入说明	
输入一个整数n（0<=n<=100000000）
输出说明	
在一行上依次输出整数n的位数，以及组成该整数的所有数字中的最大数字和最小数字，各个数字之间用空格分隔。
输入样例	
217
输出样例	
3 7 1
*/

#include<stdio.h>
int main()
{
	unsigned int n=0,t=0;
	unsigned short i=0,j=0,digit[9]={0};
	unsigned short digitmax=0,digitmin=0;
	scanf("%d",&n);
	t=n;
	do
	{
		digit[i]=t%10;
		t/=10;
		i++;
	}while(t!=0);
	digitmin=digit[0];
	for(j=0;j<i;j++)
	{
		if(digit[j]>digitmax) digitmax=digit[j];
		if(digit[j]<digitmin) digitmin=digit[j];
	}
	printf("%hd %hd %hd",i,digitmax,digitmin);
	return 0;
}

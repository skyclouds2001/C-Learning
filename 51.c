/*
标题	
寻找最大整数
类别	
流程控制
时间限制	
1S
内存限制	
1000Kb
问题描述	
从键盘输入四个整数，找出其中的最大值并将其输出。
输入说明	
输入4个整数，用空格分隔
输出说明	
输出值最大的一个整数
输入样例	
25 99 -46 0
输出样例	
99
*/

#include<stdio.h>
int main()
{
	int a,b,c,d,max;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a>b)  max=a;
	else  max=b;
	if(c>max)  max=c;
	if(d>max)  max=d;
	printf("%d",max);
	return 0;
}

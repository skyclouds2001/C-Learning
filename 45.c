/*
标题	
气温波动
类别
流程控制
时间限制	
1S
内存限制	
256Kb
问题描述	
最近一段时间气温波动较大。已知连续若干天的气温，请给出这几天气温的最大波动值是多少，即在这几天中某天气温与前一天气温之差的绝对值最大是多少。
输入说明	
输入数据分为两行。
第一行包含了一个整数n，表示给出了连续n天的气温值，2 ≤ n ≤ 30。
第二行包含n个整数，依次表示每天的气温，气温为-20到40之间的整数。
输出说明	
输出一个整数，表示气温在这n天中的最大波动值。
输入样例	
6
2 5 5 7 -3 5
输出样例	
10
*/

#include<stdio.h>

short abn(short a,short b)
{
	short t;
	if(a>b)
	    t=a-b;
	else
	    t=b-a;
	return t;
}

int main()
{
	short n,i,t;
	scanf("%hd",&n);
	short tem[n];
	short max=0;
	for(i=0;i<n;i++)
		scanf("%hd",&tem[i]);
	for(i=0;i<n-1;i++)
	{
		t=abn(tem[i],tem[i+1]);
		if(t>max)    max=t;
	}
	printf("%hd",max);
	return 0;	
}

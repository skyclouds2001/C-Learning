/*
题目3：最小差值
问题描述
　　给定n个数，请找出其中相差（差的绝对值）最小的两个数，输出它们的差值的绝对值。
输入格式
　　输入第一行包含一个整数n。
　　第二行包含n个正整数，相邻整数之间使用一个空格分隔。
输出格式
　　输出一个整数，表示答案。
样例输入
5
1 5 4 8 20
样例输出
1
样例说明
　　相差最小的两个数是5和4，它们之间的差值是1。
样例输入
5
9 3 6 1 3
样例输出
0
样例说明
　　有两个相同的数3，它们之间的差值是0.
数据规模和约定
对于所有评测用例，2 ≤ n ≤ 1000，每个给定的整数都是不超过10000的正整数。
*/

#include<stdio.h>
int main()
{
	int n;
	int a[1000];
	int b1,b2;
	int i,j;
	int min;
	min=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>min)    min=a[i];
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])  
			{
				b1=a[i];
				b2=a[j];
			}
			else
			{
				b2=a[i];
				b1=a[j];
			}
			if(min>b1-b2)
			{
				min=b1-b2;
			}
		}
	}
	printf("%d",min);
	return 0;
}

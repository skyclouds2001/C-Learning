/*
整数简单运算
问题描述：编写程序，计算用户输入的两个整数的和、差、乘积（*）和商（/）。
输入格式：输入两个整数，整数之间用空格分隔。
输出格式：输出四个整数结果，分别表示和、差、积和商，每输出一个结果换行。
输入样例：
3 4
输出样例：
7
-1
12
0
*/

#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	scanf("%d%d",&a,&b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	printf("%d \n%d \n%d \n%d \n",c,d,e,f);
	return 0;
}

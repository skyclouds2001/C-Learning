/*
题目描述：计算三个整数的平均值，结果保留两位小数。
输入格式：共一行，包含三个整数，整数之间用空格分隔。
输出格式：共一行，输出平均值，结果保留两位小数。
输入示例：20 42 55
输出示例：39.00
*/

#include<stdio.h>
int main()
{
	int a,b,c;
	double average;
	scanf("%d%d%d",&a,&b,&c);
	average=((double)a+(double)b+(double)c)/3.0;
	printf("%.2f",average);
	return 0;
}

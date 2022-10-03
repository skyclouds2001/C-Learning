/*
题目描述：公司财务要发工资现金，需要提前换取100元、50元、20元、10元、5元和1元的人民币，
请输入工资数，计算张数最少情况下，各自需要多少张。
输入格式：共一行，输入一个正整数。
输出格式：共一行，分别是100、50、20、10、5、1元面额的张数，用空格隔开各个数据。
示例：
输入：1258
输出：12 1 0 0 1 3
*/

#include<stdio.h>

int num(int yuan,int value)
{
	return yuan/value;
 } 

int main()
{
	int b[6]={0},a[6]={100,50,20,10,5,1};
	int sum,i;
	scanf("%d",&sum);
	for(i=0;i<6;i++)
	{
		b[i]=num(sum,a[i]);
		sum-=(b[i]*a[i]);
	}
	for(i=0;i<6;i++)
	{
		printf("%d ",b[i]);
	}
	return 0;
}

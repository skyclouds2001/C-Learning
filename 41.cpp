/*
标题	
PM2.5

类别
流程控制

时间限制	
1S

内存限制	
256Kb

问题描述	
给出一组PM2.5数据，按以下分级标准统计各级天气的天数，并计算出PM2.5平均值。
PM2.5分级标准为：
一级优（0<=PM2.5<=50）
二级良（51<=PM2.5<=100为）
三级轻度污染（101<=PM2.5<=150）
四级中度污染（151<=PM2.5<=200）
五级重度污染（201<=PM2.5<=300）
六级严重污染（PM2.5>300）

输入说明	
输入分为两行，
第一行是一个整数n表示天数（1<n<=100）；
第二行为n个非负整数Pi（0<=Pi<=1000），表示每天的PM2.5值，整数之间用空格分隔。

输出说明	
输出两行数据，
第一行为PM2.5平均值，结果保留2位小数；
第二行依次输出一级优，二级良，三级轻度污染，四级中度污染，五级重度污染，六级严重污染的天数。

输入样例	
10
50 100 120 80 200 350 400 220 180 165

输出样例	
186.50
1 2 1 3 1 2
*/

#include<stdio.h>
int main()
{
	unsigned short n=0,t=0,i=0;
	unsigned int sum=0;
	double average=0.0;
	scanf("%hd",&n);
	unsigned short pi[n]={0};
	unsigned short days[6]={0};
	for(i=0;i<n;i++)
	    scanf("%hd",&pi[i]);
	for(i=0;i<n;i++)
	{
		t=pi[i];
		sum+=t;
		if(t>=0&&t<=50)
		    days[0]++;
		else if(t>=51&&t<=100)
		    days[1]++;
		else if(t>=101&&t<=150)
		    days[2]++;
		else if(t>=151&&t<=200)
		    days[3]++;
		else if(t>=201&&t<=300)
		    days[4]++;
		else if(t>300)
		    days[5]++;
	}
	average=(double)sum/(double)n;
	printf("%.2f \n",average);
	for(i=0;i<6;i++)
	    printf("%hd ",days[i]);
	return 0;
 } 

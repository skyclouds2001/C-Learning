/*
问题描述	
判断正整数a能否被b整数，如果不能整除，输出商和余数

输入说明	
输入两个正整数a和b（0<a, b<=10000），a和b之间用空格分隔。

输出说明	
如果a能被b整除，输出yes，否则在同一行输出a除以b的商和余数，商和余数之间用空格分隔

输入样例	
17 7
输出样例	
2 3
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	div_t output;
	scanf("%d%d",&a,&b);
	if(a%b==0)
	{
		printf("yes");
	}
	else
	{
		output=div(a,b);
		printf("%d %d",output.quot,output.rem);
	}
	return 0;
}

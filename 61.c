/*
输入说明
输入一个三位正整数	

输出说明
按数位从高到低依次输出，各数位之间以一个空格相分离。	

输入样例
985

输出样例
9 8 5	

提示
输入三位数，各数位格式输出，从高到低，一个空格分隔，如9 8 5
*/

#include<stdio.h>
int main()
{
	int d3,a,b,c;
	scanf("%d",&d3);
	a=d3/100;
	c=d3%10;
	b=((d3-c)/10)%10;
	printf("%d %d %d",a,b,c);
	return 0;
 }

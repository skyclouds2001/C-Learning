/*
编写一个函数，输入一个十六进制正整数，输出相应的十进制正整数
输入格式：输入一个十六进制正整数（不区分大小写）
输出格式：输出一个十进制正整数
输入样例：F
输出样例：15
*/
#include<stdio.h>
int main()
{
	int t=0;
	scanf("%x",&t);
	printf("%d",t);
	return 0;
}

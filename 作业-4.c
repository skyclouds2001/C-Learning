/*
4、题目名称：非负整数数字颠倒
题目描述：
A是一个整数(0<=A<=2^31-1)，颠倒其低位和高位的顺序，即最低位变为最高位，次低位变为次高位……。
输入说明：
输入整数A (0<=A<=2^31-1)；
输出说明：
第一行输出颠倒后此整数的位数；
第二行输出将A颠倒后的结果。
输入样例：
12345
输出样例
5
54321
*/

#include<stdio.h>

int main()
{
	int A,B,C=0;
	short a[10]={0};
	short N,i=0;
	printf("please input an integer \n");
	scanf("%d",&A);
	B=A;
	while(B!=0)
	{
		a[i]=B%10;
		i++;
		B/=10;  
	}
	N=i;
	for(i=0;i<N;i++)
	{
		C+=a[i];
		C*=10;
	}
	printf("%hd \n",N);
	printf("%d \n",C/10);
	return 0;
}

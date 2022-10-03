#include<stdio.h>
#define PI 3.1415926535

int main()
{
	double r,S;
	printf("请输入圆的半径：\n");
	scanf("%lf",&r);
	S=2.0*PI*r;
	printf("圆的周长为%lf",S);
	return 0;
}

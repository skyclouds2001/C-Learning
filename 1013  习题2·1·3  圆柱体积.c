#include<stdio.h>
#define PI 3.1415926535

int main()
{
	double r,V,h;
	printf("请输入圆柱的半径与高：\n");
	scanf("%lf%lf",&r,&h);
	V=PI*r*r*h;
	printf("圆柱的体积为%lf",V);
	return 0;
}

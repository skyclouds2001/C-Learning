#include<stdio.h>
#define PI 3.1415926535

int main()
{
	double r,S,V;
	printf("请输入球的半径：\n");
	scanf("%lf",&r);
	S=4.0*PI*r*r;
	V=4.0*PI*r*r*r/3.0;
	printf("球的表面积为%lf\n，球的体积为%lf",S,V);
	return 0;
}

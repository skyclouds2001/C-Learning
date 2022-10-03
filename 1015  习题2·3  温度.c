#include<stdio.h>

int main()
{
	int h,min;
	double t,T;
	printf("请输入经过时间（小时、分钟）：\n");
	scanf("%d %d",&h,&min);
	t=(double)h+(double)min/60.0;
	T=4*t*t/(t+2)-20;
	printf("最终温度为%lf",T);
	return 0;
 } 

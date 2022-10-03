/*
题目：牛顿迭代法求根
时间限制：1S
内存限制：10000Kb
问题描述：
用牛顿迭代法求下面方程在1.5附近的根
输入说明：
输入题目中给出的浮点数。
输出说明：
输出该方程的根想，小数点后保留2位小数。
输入样例：
1.5
输出样例：
2.00
*/

#include<stdio.h>
#include<math.h>
double f(double x)
{
	double s;
	s=x*x*x*2-x*x*4+3*x-6;
	return s;
}
double ff(double x)
{
	double s;
	s=6*x*x-8*x+3;
	return s;
}
int main()
{
	double x,t;
	scanf("%lf",&x);
	do
	{
		if(ff(x)==0)
			return 0;
		if(f(x)==0)
		    break;
	    t=x-f(x)/ff(x);
	    if(fabs(x-t)<=0.0001)
	        break;
		x=t;	    
	}while(1);
	printf("%.2f",x);
	return 0;	
 } 

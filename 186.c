/*
��Ŀ��ţ�ٵ��������
ʱ�����ƣ�1S
�ڴ����ƣ�10000Kb
����������
��ţ�ٵ����������淽����1.5�����ĸ�
����˵����
������Ŀ�и����ĸ�������
���˵����
����÷��̵ĸ��룬С�������2λС����
����������
1.5
���������
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

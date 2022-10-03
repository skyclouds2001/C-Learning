/*
2、 标题   cosx计算   P72
问题描述  利用下式计算cosx的近似值，直到最后一项的绝对值小于10^-4.
输入说明   第一行是 1 个整数n, 表示有n 组测试数据；后面n行， 每行1个实数，表示x ( 弧度 )。
输出说明  n行。
输入样例  	
2
3.14159
0
输出样例
-1.000004
1.000000
*/

#include<stdio.h>
#include<math.h>

int main()
{
	double sum,term,bn,x;   //sum:总和; term:各项的值; bn:各项的值绝对; x:输入的自变量; 
	int N,i,j,Tn,sg,jc;   //N:计算的数的个数; i,j:运行参数; Tn:x乘方部分值; jc:阶乘部分值; sg:-1部分值;
	double a[N];
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		scanf("%lf",&a[i]);
	}
	for(j=1;j<=N;j++)
	{
		sum=1;
		i=1;
	    jc=1;
	    x=a[j]*a[j];
	    sg=-1;
		bn=1;
		term=1;
		Tn=1; 
		while(bn<=0.00001)
		{
			term=1;
			term*=sg;
			Tn*=x;
			jc*=(i*2)*(i*2-1);
			term*=Tn*jc;
			sg*=(-1);
			sum+=term;
			bn=fabs(term);
			i++;
		}
		printf("%lf \n",sum);
	}
	return  0;
	
 } 

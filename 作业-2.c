/*
2�� ����   cosx����   P72
��������  ������ʽ����cosx�Ľ���ֵ��ֱ�����һ��ľ���ֵС��10^-4.
����˵��   ��һ���� 1 ������n, ��ʾ��n ��������ݣ�����n�У� ÿ��1��ʵ������ʾx ( ���� )��
���˵��  n�С�
��������  	
2
3.14159
0
�������
-1.000004
1.000000
*/

#include<stdio.h>
#include<math.h>

int main()
{
	double sum,term,bn,x;   //sum:�ܺ�; term:�����ֵ; bn:�����ֵ����; x:������Ա���; 
	int N,i,j,Tn,sg,jc;   //N:��������ĸ���; i,j:���в���; Tn:x�˷�����ֵ; jc:�׳˲���ֵ; sg:-1����ֵ;
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

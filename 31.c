/*
����:	
���Լ��
���:	
ʱ������:	
1 S
�ڴ�����:	
1000 Kb
��������:	
���Լ����GCD��ָĳ����������������������һ�������Լ�������������ʣ�
gcd(a,0)=a
gcd(a,1)=1
��˵�����������һ��Ϊ0ʱ��gcd�ǲ�Ϊ0���Ǹ�������
��������������ʱ���Լ��Ϊ1��
������������a��b�������Լ��
����˵����
����Ϊ�����Ǹ�����a��b��0<=a,b<10000����a��b֮���ÿո�ָ���
���˵����
��������Լ��
����������
����1����	
2 4
����2���룺
12 6
����3���룺
3 5
���������
����1���	
2
����2���
6
����3���
1
*/

#include<stdio.h> 

int maxf(int a,int b)
{
	if(a>b) 
	    return a;
	else
	    return b;
}

int minf(int a,int b)
{
	if(a<b) 
	    return a;
	else
	    return b;
}

int main()
{
	int a,b;
	int t;
	int max,min;
	scanf("%d%d",&a,&b);
	if(a==0||b==0)
	{
		printf("%d",maxf(a,b));
		return 0;
	}
	max=maxf(a,b);  min=minf(a,b);   
	while(1)
	{
		t=max-min;
		if(t==1||t==min)  break;
		else if(t<min)
		{
		    max=min;
		    min=t;
		}    
		else if(t>min)		
			max=t;							
	}
	printf("%d",t);
	return 0; 
}

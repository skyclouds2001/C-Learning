/*
����	
��°ͺղ���
���	
������ݹ�
ʱ������	
2S
�ڴ�����	
10000Kb
��������
��°ͺղ��룺
����һ����ż�����ֽܷ�Ϊ���������ĺ�,
���������һ����ż����дһ����������֤��°ͺղ��롣
����ÿ����ż�����ֽܷ�ɶ��������ͣ�������ֽ�ֵ�ֱ�����С�����������һ�飬����С����˳�������
����˵��	
����һ����ż��n��1<n<1000��
���˵��	
����ֽ����������С�����������
��������	
10
�������	
3 7
*/ 

#include<stdio.h>
#include<math.h>

short isprime(int x)
{
	int i;
	short flag;
	flag=1;
	if(x==2) 	
		return 1;
	else if(x%2==0)
	    return 0;		
	for(i=3;i<=sqrt(x);i+=2)
	{
		if(x%i==0) 
		{
			flag=0;
			break;
		}			
	}
	if(flag==1)			
	    return 1;
	else 
	    return 0;
} 

int main()
{
	int n;
	int i;
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(isprime(i)==1&&isprime(n-i)==1)					
			break;		   
	}
	printf("%d %d",i,n-i);
	return 0;	
}

/*
�ֽ�������
��Ŀ������
ÿ����������������������д�ɼ���������Ҳ�ɳ�Ϊ��������˵���ʽ��
�⼸�������Ͷ������������������������д����һ���������ֽ�������
����������
����һ��������n��2<n<1000��
���������
����a*b*b*c�����������մ�С�����˳������
����������
90
���������
2*3*3*5
*/

#include<stdio.h>
#include<math.h>

short isprime(short x)
{
	short flag;
	short i;
	if(x<=1)
	    flag=0;
	else if(x==2)
	    flag=1;
	else if(x%2==0)
	    flag=0;
	else
	{
		flag=1;
		for(i=3;i<=sqrt(x);i+=2)
		{
			if(x%i==0)
			{
				flag=0;
				break;
			}    			    
		}
	}
	return flag;    
} 
 
int main()
{
	short n=0,t=0;
	short i=0,j=0;
	short p[10]={0};
	scanf("%hd",&n);
	if(n==3)
	{
		printf("3");
		return 0;
	}
	t=n;
	for(i=2;i<=n;)
	{						
		if(isprime(i))
		{
			if(t%i==0)
			{
				t/=i;
				p[j]=i;
				j++;
			}						
			if(t==1)
			{
				break;
			}
		}
		if(t%i!=0)
		{
			i++;
		}
	}
	printf("%hd",p[0]);
	for(i=1;i<j;i++)
	{
		printf("*");
		printf("%hd",p[i]);
	}
	return 0;
}



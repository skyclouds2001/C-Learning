/*
����	
��������
���
���̿���
ʱ������	
1S
�ڴ�����	
256Kb
��������	
����һ������n��0<=n<=100000000���������������λ�����Լ���ɸ����������������е�������ֺ���С���֡�
����˵��	
����һ������n��0<=n<=100000000��
���˵��	
��һ���������������n��λ�����Լ���ɸ����������������е�������ֺ���С���֣���������֮���ÿո�ָ���
��������	
217
�������	
3 7 1
*/

#include<stdio.h>
int main()
{
	unsigned int n=0,t=0;
	unsigned short i=0,j=0,digit[9]={0};
	unsigned short digitmax=0,digitmin=0;
	scanf("%d",&n);
	t=n;
	do
	{
		digit[i]=t%10;
		t/=10;
		i++;
	}while(t!=0);
	digitmin=digit[0];
	for(j=0;j<i;j++)
	{
		if(digit[j]>digitmax) digitmax=digit[j];
		if(digit[j]<digitmin) digitmin=digit[j];
	}
	printf("%hd %hd %hd",i,digitmax,digitmin);
	return 0;
}

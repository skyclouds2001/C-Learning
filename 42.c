/*
��������	
�ж�������a�ܷ�b�����������������������̺�����

����˵��	
��������������a��b��0<a, b<=10000����a��b֮���ÿո�ָ���

���˵��	
���a�ܱ�b���������yes��������ͬһ�����a����b���̺��������̺�����֮���ÿո�ָ�

��������	
17 7
�������	
2 3
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	div_t output;
	scanf("%d%d",&a,&b);
	if(a%b==0)
	{
		printf("yes");
	}
	else
	{
		output=div(a,b);
		printf("%d %d",output.quot,output.rem);
	}
	return 0;
}

/*
��Ŀ����������һ��0~9��һλ������������Ӧ��Ӣ�ĵ��ʡ�Ҫ����switch�ṹ��ɡ�

ʾ����
���룺0
�����zero
���룺8
�����eight
*/

#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	switch(t)
	{
		case 0:printf("zero");break;
		case 1:printf("one");break;
		case 2:printf("two");break;
		case 3:printf("three");break;
		case 4:printf("four");break;
		case 5:printf("five");break;
		case 6:printf("six");break;
		case 7:printf("seven");break;
		case 8:printf("eight");break;
		case 9:printf("nine");break;
	}
	return 0;
 } 

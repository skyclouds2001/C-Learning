/*
����һ����ĸ��������Сд��ĸ��ת��Ϊ��д������������д��ĸ��ת��ΪСд��� 
*/

#include<stdio.h>
#include<ctype.h>
int main()
{
	char t,op;
	scanf("%c",&t);
	if(t>='a'&&t<='z')
	{
		op=toupper(t);
	}
	else if(t>='A'&&t<='Z')
	{
		op=tolower(t);
	}
	printf("%c",op);
	return 0;
}

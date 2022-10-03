/*
输入一个字母，若输入小写字母，转换为大写输出，若输入大写字母，转换为小写输出 
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

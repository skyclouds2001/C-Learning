#include<string.h>
#include<stdio.h>
int main()
{
	short a=0,bb=0;
	char b[2]={'\0'};
	scanf("%hd",&a);
	getchar();
	b[0]=getchar();
	bb=b[0]-'0';
	printf("%d,%hd",a+b[0],a+bb);
	return 0;
}


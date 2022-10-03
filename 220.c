#include<stdio.h>
short lens(char*);
int main()
{
	char s[1000]={'\0'};
	gets(s);	
	short n=lens(s);
	printf("%hd",n);
	return 0;
}
short lens(char*p)
{
	short n=0;
	while(*(p+n)!='\0')  n++;
	return n;
}

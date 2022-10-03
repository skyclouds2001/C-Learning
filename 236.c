#include<stdio.h>
#include<string.h> 
int main()
{
	char s[500]={'\0'};
	gets(s);
	char *ss[500]={0};
	short i=0;
	short strlong(char**);
	for(i=0;s[i]!='\0';i++)  ss[i]=s+i;
	short n=strlong(ss);
	printf("%hd",n);
	return 0;
}
short strlong(char**p)
{
	char**q=p;
	while(*q)  q++;
	return (q-p);
}

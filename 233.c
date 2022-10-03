#include<stdio.h>
#include<string.h>
int main()
{
	char s[51]={'\0'},ss[50]={'\0'};
	short m=0;
	gets(s);
	scanf("%hd",&m);
	short n=strlen(s);
	void copystr(char*,char*,short);
	if(m<=n)
	{
		copystr(s,ss,m);
		puts(ss);
	}
	else if(m>n)  printf("error");
	return 0;
}
void copystr(char*s,char*ss,short m)
{
	char*p=s+m-1,*q=ss;
	while(*p!='\0')
	{
		*q=*p;
		p++;
		q++;
	}
}

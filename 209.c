#include<stdio.h>
#include<string.h>
int main()
{
	char str[50]={'\0'},ch[50]={'\0'};
	short M=0;
	gets(str);
	scanf("%hd",&M);
	void char_cp(char*,char*,short);
	char_cp(str,ch,M);
	puts(ch);
	return 0;
}
void char_cp(char*a,char*b,short k)
{
	strcpy(b,a+k+1);
}

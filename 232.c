#include<stdio.h>
#include<string.h>
int main()
{
	char s[51]={'\0'};
	_Bool flag=0;
	gets(s);
	short n=strlen(s);
	short i=0;
	while(s[i]==s[n-i-1]&&i<n-i-1)  i++;
	if(n%2==0&&n==i*2)  flag=1;
	else if(n%2==1&&n-i-1==i)  flag=1;
	if(flag)  printf("yes");
	else  printf("no");
	return 0;
 } 

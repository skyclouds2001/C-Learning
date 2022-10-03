#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	short f=0,i=0,n=0,count=0;
	char ss[101]={'\0'},s=0;
	scanf("%c %hd",&s,&f);
	getchar();
	gets(ss);
	n=strlen(ss);
	if(f==1)
	{
		for(i=0;i<n;i++)
		{
			if(ss[i]==s) count++;
		}
	}
	else if(f==0)
	{
		for(i=0;i<n;i++)
		{
			if(ss[i]==s) count++;
			else if(islower(s)&&ss[i]==toupper(s)) count++;
			else if(isupper(s)&&ss[i]==tolower(s)) count++;
		}
	}
	printf("%hd",count);
	return 0;
}

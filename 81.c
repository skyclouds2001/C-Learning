#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char s[2][101]={'\0'};
	gets(s[1]);
	short n=0,sym=0,N=strlen(s[1]);
	scanf("%hd%hd",&sym,&n);
	getchar();
	char ss[n+1][101];
	short i=0,j=0,t=0;
	for(i=0;i<n;i++)  gets(ss[i]);
	if(!sym)
	{
		strcpy(s[0],s[1]);
		for(j=0;j<N;j++)
		{
			if(isupper(s[0][j]))
			{
				s[0][j]=s[0][j]-'A'+'a';
			}
		}
	}
	for(i=0;i<n;i++)
	{
		t=strlen(ss[i]);
		if(sym)
		{
			for(j=0;j<t;j++)
			{
				if(ss[i][j]==s[1][0]&&!strncmp(s[1],ss[i]+j,N))
				{
					puts(ss[i]);
					break;
				}
			}
		}
		else if(!sym)
		{
			strcpy(ss[n],ss[i]);
			for(j=0;j<t;j++)
			{
				if(isupper(ss[n][j]))
				{
					ss[n][j]=ss[n][j]-'A'+'a';
				}
			}
			for(j=0;j<t;j++)
			{
				if(ss[n][j]==s[0][0]&&!strncmp(s[0],ss[n]+j,N))
				{
					puts(ss[i]);
					break;
				}
			}			
		}
	}
	return 0;  
}

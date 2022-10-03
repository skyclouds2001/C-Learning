#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char s[256]={'\0'},com[101][50]={'\0'};
	gets(s);
	short n=strlen(s);
	short i=0,j=0,k=0;
	for(;i<n;i++)
	{
		if(s[i]=='-')
		{
			for(j=i+1;isalnum(s[j])&&j<n;j++)  ;
			strncpy(com[k],s+i+1,j-i-1);		
			k++;
			i=j;
			for(j=0;j<k-1;j++)
			{
				if(!strcmp(com[j],com[k-1]))
				{
					memset(com[k-1],'\0',20*sizeof(char));
					k--;
				}
			}			
		}
	}
	for(i=0;i<k;i++)
	{
		for(j=0;j<k-i-1;j++)
		{
			if(strcmp(com[j],com[j+1])>0)
			{
				strcpy(com[100],com[j]);
				strcpy(com[j],com[j+1]);
				strcpy(com[j+1],com[100]);
			}
		}
	}
	if(k==0)  printf("no");
	else
	{
		for(i=0;i<k;i++)  printf("-%s ",com[i]);
	}
	return 0;
} 

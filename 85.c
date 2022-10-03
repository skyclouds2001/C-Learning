#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char s1[101]={'\0'},s2[101]={'\0'};
	gets(s1);
	gets(s2);
	short len1=strlen(s1),len2=strlen(s2),LCS=0;
	short i=0,j=0;
	float ans=0;
	for(i=0;i<len1;i++)
	{
		if(isupper(s1[i]))  s1[i]=s1[i]-'A'+'a';
	}
	for(i=0;i<len2;i++)
	{
		if(isupper(s2[i]))  s2[i]=s2[i]-'A'+'a';
	}
	for(i=0;i<len1;i++)
	{
		for(j=0;j<len2;j++)
		{
			if(s1[i]==s2[j])
			{
				short k=0;
				while(s1[i+k]==s2[j+k]&&i+k<len1&&j+k<len2)  k++;
				if(LCS<k)  LCS=k;
			}
		}
	}
	ans=2.0*(float)LCS/(float)(len1+len2);
	printf("%.3f",ans);
	return 0;
 } 

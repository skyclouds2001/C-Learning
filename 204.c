#include<stdio.h>
#include<string.h>
int main()
{
	char string[101]={'\0'};
	char word[9]={'\0'};
	short count(char*,char*);
	short N=0,i=0;
	gets(string);
	gets(word);
	N=count(string,word);
	while(word[i]!='\0')
	{
		printf("%c",word[i]);
		i++;
	}
	printf(" %hd",N);
	return 0;
}
short count(char*a,char*b)
{
	short i=0,j=0;
	short n=0,m=0,count=0;
	n=strlen(a);
	m=strlen(b);
	for(i=0;i<n;i++)
	{
		if(*(a+i)==*b&&(i==0||*(a+i-1)==' '))
		{			
			for(j=0;j<m&&i+j<n;j++)
			{
				if(*(a+i+j)!=*(b+j))  break;
			}
			if(j==m&&(*(a+i+m)==' '||*(a+i+m)=='\0')) count++;				
		}
	}
	return count;
}

#include<stdio.h>
#include<string.h>
int main()
{
	char string[101]={'\0'},word[9]={'\0'};
	short N=0,M=0,count=0;
	short i=0,j=0,n=0;
	gets(string);
	gets(word);
	N=strlen(string);
	M=strlen(word);
	for(i=0;i<N;i++)
	{
		if(string[i]>='A'&&string[i]<='Z')
		{
			string[i]=string[i]-'A'+'a';
		}
	}
	for(i=0;i<N;i++)
	{
		if(i==0||string[i-1]==' ')
		{
			j=i;
			while(string[j]!=' '&&j<N)  j++;
			n=j-i;
			if(n==M)
			{
				if(!strncmp(word,string+i,n))  count++;
			}
			i=j;
		}
	}
	printf("%s %hd",word,count);
	return 0;
}

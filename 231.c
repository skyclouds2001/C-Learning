#include<stdio.h>
#include<string.h>
int main()
{
	char s[101]={'\0'};
	gets(s);
	short n=strlen(s);
	short len=0,maxlen=0;
	short i=0,j=0;
	for(i=0;i<n;)
	{
		if(i==0||s[i-1]==' ')
		{
			j=i+1;
			while(s[j]!=' '&&s[j]!='.')  j++;
			len=j-i;
			if(maxlen<len)  maxlen=len;
			i=j+1;
		}
	}
	printf("%hd",maxlen);
	return 0;
}
